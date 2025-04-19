@class RTLearnedLocationOfInterest;

@interface RTAuthorizedLocation : NSObject

@property (readonly) RTLearnedLocationOfInterest *loi;
@property long long rank;
@property (readonly) double dwellTime_s;
@property (readonly) long long numberOfDaysVisited;
@property (readonly) long long ageDaysFirstVisit;
@property (readonly) long long ageDaysFirstRegisteredVisit;
@property (readonly) unsigned long long locationTechnologyAvailability;
@property (readonly) long long visitsWithTechnologyAnnotation;
@property (readonly) long long visitsWithGPS;
@property (readonly) long long visitsWithWiFiHI;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLoi:(id)a0 dwellTime:(double)a1 numberOfDaysVisited:(long long)a2 ageDaysFirstVisit:(long long)a3 ageDaysFirstRegisteredVisit:(long long)a4 locationTechnologyAvailability:(unsigned long long)a5 visitsWithTechnologyAnnotation:(long long)a6 visitsWithGPS:(long long)a7 visitsWithWiFiHI:(long long)a8;

@end
