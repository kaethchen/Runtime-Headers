@interface CLSTestEnvironment : NSObject

+ (id)test_cacheBusinessItem:(id)a0 poiCache:(id)a1;
+ (id)test_locationOfInterestAndVisitFromDictionary:(id)a0 poiCache:(id)a1;
+ (id)test_placemarkWithData:(id)a0;
+ (id)test_publicEventManagerWithQueryRadius:(double)a0 invalidateCache:(BOOL)a1;
+ (void)test_routineAddLocationOfInterest:(id)a0 toServiceManager:(id)a1;
+ (void)test_setMePersonIdentity:(id)a0 onServiceManager:(id)a1;

@end
