@class NSManagedObjectID, NSString, NSArray, NSThread, NSInvocation, NSManagedObjectContext;

@interface GEOFindCityOperation : NSOperation {
    int mode;
    double longitude;
    double latitude;
    double longitudeSpan;
    double latitudeSpan;
    NSArray *resultCities;
    NSThread *operationThread;
    NSManagedObjectContext *managedObjectContext;
}

@property long long fetchLimit;
@property (retain) NSInvocation *invocationWhenDone;
@property (retain) id userInfo;
@property (readonly) NSString *searchString;
@property (retain) NSArray *timeZoneNamesScope;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) NSManagedObjectID *resultCityID;
@property (readonly) NSArray *resultCityIDs;

+ (id)findCityOperationWithLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3;
+ (id)findCityOperationWithNameMatchingString:(id)a0;

- (void)dealloc;
- (void)main;
- (void)_main;
- (id)_coordinateSearch:(id)a0;
- (id)_nameSearch:(id)a0;
- (BOOL)couldFetchMoreResults;
- (id)initWithLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3;
- (id)initWithNameMatchingString:(id)a0;
- (void)whenFinishedInvokeSelector:(SEL)a0 onTaget:(id)a1;

@end
