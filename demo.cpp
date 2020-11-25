#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <json/json.h>
#include <string>
#include <iostream>
#include<ctime>
using namespace std;
using namespace rapidjson;

void readJsonCpp(); 
void readRepidJson(); 
const char* Strjson= "{\"travelId\":123456,\"isCompleted\":1, \"avgSpeed\":18, \"maxSpeed\":62, \"posCount\":248, \"totalSpeed\":4668,\"startPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":196, \"speed\":0, \"direction\":0}, \"stopPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":1972, \"speed\":0, \"direction\":10}, \"travelMileage\":1776, \"travelOil\":370, \"travelPeriod\":930, \"drivePeriod\":930, \"overSpeedCount\":0, \"celerateCount\":0, \"decelerateCount\":0, \"stopACCOnCount\":0, \"startFlag\":2, \"stopFlag\":5, \"startEventId\":123456,\"stopEventId\":123456,\"stayId\":123456,\"remark\":\"[OBD]启动->[OBD]熄火\", \"seqFaultCode\":[]}";
/*
{
    "travelId": 405777136545222656,
    "isCompleted": 1,
    "avgSpeed": 18,
    "maxSpeed": 62,
    "posCount": 248,
    "totalSpeed": 4668,
    "startPos": {
        "gpsTime": 1606210403,
        "rcvTime": 1606210407,
        "mileage": 196,
        "speed": 0,
        "direction": 0
    },
    "stopPos": {
        "gpsTime": 1606211333,
        "rcvTime": 1606211342,
        "mileage": 1972,
        "speed": 0,
        "direction": 10
    },
    "travelMileage": 1776,
    "travelOil": 370,
    "travelPeriod": 930,
    "drivePeriod": 930,
    "overSpeedCount": 0,
    "celerateCount": 0,
    "decelerateCount": 0,
    "stopACCOnCount": 0,
    "startFlag": 2,
    "stopFlag": 5,
    "startEventId": 405777136545222657,
    "stopEventId": 405777136545222658,
    "stayId": 405777262424674304,
    "remark": "[OBD]启动->[OBD]熄火",
    "seqFaultCode": []
}
*/
void readJsonCpp() 
{   
    std::cout << "|==================|" << std::endl;
    std::cout << "|| jsonCpp  output||" << std::endl;
    std::cout << "|==================|" << std::endl;
    clock_t startTime,endTime;
    startTime = clock();//计时开始
    for (int i = 0; i < 10000000; i++) {
        
    Json::Reader reader;
    Json::Value root;
 
   if(reader.parse(Strjson,root))
   {
      
   }else{
      std::cout<<"**"<<std::endl;
   }
}

    
     endTime = clock();//计时结束
     cout << "The run time is: " <<(float)(endTime - startTime) / CLOCKS_PER_SEC * 1000<< "ms" << endl;

  
}
void readRepidJson() {
    std::cout << "|==================|" << std::endl;
    std::cout << "||rapidjson output||" << std::endl;
    std::cout << "|==================|" << std::endl;
    // 1. Parse a JSON string into DOM.
    //const char* json= "{\"key1\":\"value1\",\"array\":[{\"key2\":\"value2\"},{\"key2\":\"value3\"},{\"key2\":\"value4\"}]}";
    //const char* json= "{\"travelId\":123456,\"isCompleted\":1, \"avgSpeed\":18, \"maxSpeed\":62, \"posCount\":248, \"totalSpeed\":4668,\"startPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":196, \"speed\":0, \"direction\":0}, \"stopPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":1972, \"speed\":0, \"direction\":10}, \"travelMileage\":1776, \"travelOil\":370, \"travelPeriod\":930, \"drivePeriod\":930, \"overSpeedCount\":0, \"celerateCount\":0, \"decelerateCount\":0, \"stopACCOnCount\":0, \"startFlag\":2, \"stopFlag\":5, \"startEventId\":123456,\"stopEventId\":123456,\"stayId\":123456,\"remark\":\"[OBD]启动->[OBD]熄火\", \"seqFaultCode\":[]}";
    clock_t startTime,endTime;
    startTime = clock();//计时开始
    for (int i = 0; i < 10000000; i++) {
    Document doc;
    if (!doc.Parse(Strjson).HasParseError()){

    }else
    {
        std::cout<<"******"<<std::endl;
    }
}
    endTime = clock();//计时结束
    cout << "The run time is: " <<(float)(endTime - startTime) / CLOCKS_PER_SEC * 1000.0<< "ms" << endl;

    
}
int main() 
{
	readJsonCpp();
	
	std::cout << "\n\n";

	readRepidJson();
	
	return 0;
}
   