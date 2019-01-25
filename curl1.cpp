/***************************************************************************
    forked from https://gist.github.com/alghanmi/c5d7b761b2c9ab199157
      and modifyed by :
      - using with command line arguments
      - returning and error message if addres is invalid or page is emtpy
****************************************************************************/ 

#include <iostream>
#include <string>
#include <curl/curl.h>


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main(int argc, char **argv)
{
  CURL *curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, argv[1]);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    if(readBuffer!=""){
      std::cout << readBuffer << std::endl;
    }else{
      std::cout << "the page is emty or invalid address" <<std::endl;
    }
  }
  return 0;
}