#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include<ctime>
using namespace std;
using namespace rapidjson;
int main() {
    std::cout << "|==================|" << std::endl;
    std::cout << "||rapidjson output||" << std::endl;
    std::cout << "|==================|" << std::endl;
    // 1. Parse a JSON string into DOM.
    //const char* json= "{\"key1\":\"value1\",\"array\":[{\"key2\":\"value2\"},{\"key2\":\"value3\"},{\"key2\":\"value4\"}]}";
    const char* json= "{\"travelId\":123456,\"isCompleted\":1, \"avgSpeed\":18, \"maxSpeed\":62, \"posCount\":248, \"totalSpeed\":4668,\"startPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":196, \"speed\":0, \"direction\":0}, \"stopPos\":{\"gpsTime\":160621, \"rcvTime\":160621, \"mileage\":1972, \"speed\":0, \"direction\":10}, \"travelMileage\":1776, \"travelOil\":370, \"travelPeriod\":930, \"drivePeriod\":930, \"overSpeedCount\":0, \"celerateCount\":0, \"decelerateCount\":0, \"stopACCOnCount\":0, \"startFlag\":2, \"stopFlag\":5, \"startEventId\":123456,\"stopEventId\":123456,\"stayId\":123456,\"remark\":\"[OBD]启动->[OBD]熄火\", \"seqFaultCode\":[]}";


    /*
{	
	"key1":"value1",
	"array":
	[
		{"key2":"value2"},
		{"key2":"value3"},
		{"key2":"value4"}
	]
}
*/ 
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

    clock_t startTime,endTime;
    startTime = clock();//计时开始
    for (int i = 0; i < 10000000; i++) {
    Document doc;
    if (!doc.Parse(json).HasParseError()){
    }
 /*   if (!doc.Parse(json).HasParseError()){
if (doc.HasMember("travelId")&& doc["travelId"].IsInt64()){
            int travelId = doc["travelId"].GetInt();
            //std::cout << travelId << std::endl;
        }
if (doc.HasMember("isCompleted")&& doc["isCompleted"].IsInt()){
            int isCompleted = doc["isCompleted"].GetInt();
            //std::cout << isCompleted << std::endl;
        }

if (doc.HasMember("avgSpeed")&& doc["avgSpeed"].IsInt()){
            int avgSpeed = doc["avgSpeed"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("maxSpeed")&& doc["maxSpeed"].IsInt()){
            int maxSpeed = doc["maxSpeed"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("posCount")&& doc["posCount"].IsInt()){
            int posCount = doc["posCount"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("totalSpeed")&& doc["totalSpeed"].IsInt()){
            int totalSpeed = doc["totalSpeed"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("travelMileage")&& doc["travelMileage"].IsInt()){
            int travelMileage = doc["travelMileage"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("travelOil")&& doc["travelOil"].IsInt()){
            int travelOil = doc["travelOil"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("travelPeriod")&& doc["travelPeriod"].IsInt()){
            int travelPeriod = doc["travelPeriod"].GetInt();
            //std::cout << key1 << std::endl;
        }
 if (doc.HasMember("drivePeriod")&& doc["drivePeriod"].IsInt()){
            int drivePeriod = doc["drivePeriod"].GetInt();
            //std::cout << key1 << std::endl;
        }       
if (doc.HasMember("overSpeedCount")&& doc["overSpeedCount"].IsInt()){
            int overSpeedCount = doc["overSpeedCount"].GetInt();
            //std::cout << key1 << std::endl;
        }

if (doc.HasMember("celerateCount")&& doc["celerateCount"].IsInt()){
            int celerateCount = doc["celerateCount"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("decelerateCount")&& doc["decelerateCount"].IsInt()){
            int decelerateCount = doc["decelerateCount"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("stopACCOnCount")&& doc["stopACCOnCount"].IsInt()){
            int stopACCOnCount = doc["stopACCOnCount"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("startFlag")&& doc["startFlag"].IsInt()){
            int startFlag = doc["startFlag"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("stopFlag")&& doc["stopFlag"].IsInt()){
            int stopFlag = doc["stopFlag"].GetInt();
            //std::cout << key1 << std::endl;
        }
 if (doc.HasMember("startEventId")&& doc["startEventId"].IsInt()){
            int startEventId = doc["startEventId"].GetInt();
            //std::cout << key1 << std::endl;
        }       
if (doc.HasMember("stopEventId")&& doc["stopEventId"].IsInt()){
            int stopEventId = doc["stopEventId"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("stayId")&& doc["stayId"].IsInt()){
            int stayId = doc["stayId"].GetInt();
            //std::cout << key1 << std::endl;
        }
if (doc.HasMember("remark")&& doc["remark"].IsString()){
            std::string remark = doc["remark"].GetString();
            //std::cout << key1 << std::endl;
        }
      
         Value& infoArray = doc["startPos"];
         if (infoArray.IsArray()) {

            for (int i = 0; i < infoArray.Size(); i++) {
            const Value& object = infoArray[i];
            if (object.HasMember("gpsTime")){
                int gpsTime = object["gpsTime"].GetInt();
                //std::cout << key2 << std::endl;

            }
            if(object.HasMember("rcvTime")){
                 int rcvTime = object["rcvTime"].GetInt();
                
            }
            if(object.HasMember("mileage")){
                int mileage = object["mileage"].GetInt();
            }
            if(object.HasMember("speed")){
                int speed = object["speed"].GetInt();
            }
            if(object.HasMember("direction")){
                int direction = object["direction"].GetInt();
            }
        }
      }
         infoArray = doc["stopPos"];
         if (infoArray.IsArray()) {

            for (int i = 0; i < infoArray.Size(); i++) {
            const Value& object = infoArray[i];
            if (object.HasMember("gpsTime")){
                int gpsTime = object["gpsTime"].GetInt();
                //std::cout << key2 << std::endl;

            }
            if(object.HasMember("rcvTime")){
                int rcvTime = object["rcvTime"].GetInt();
                
            }
            if(object.HasMember("mileage")){
                int mileage = object["mileage"].GetInt();
            }
            if(object.HasMember("speed")){
                int speed = object["speed"].GetInt();
            }
            if(object.HasMember("direction")){
                int direction = object["direction"].GetInt();
            }
        }
      }
    }*/
  }
    
     endTime = clock();//计时结束
     cout << "The run time is: " <<(float)(endTime - startTime) / CLOCKS_PER_SEC * 1000.0<< "ms" << endl;
    // system("pause");
    return 0;
}