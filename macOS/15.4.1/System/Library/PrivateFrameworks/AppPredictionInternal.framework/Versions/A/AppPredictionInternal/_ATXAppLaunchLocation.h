@class _PASLock, ATXCombinedIntentStream, _ATXDuetHelper;
@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> _locationManager;
    _ATXDuetHelper *_duetHelper;
    _PASLock *_lock;
    ATXCombinedIntentStream *_combinedIntentStream;
}

+ (id)defaultPath;
+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;
+ (id)sortTimeIntervals:(id)a0;
+ (id)visitsWithLOI:(id)a0 startDate:(id)a1;
+ (void)writeModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)locationManager;
- (unsigned long long)loadModel;
- (void)train;
- (void)_trainModelWithLOI:(id)a0 startDate:(id)a1;
- (id)initWithDuetHelper:(id)a0 combinedIntentStream:(id)a1 locationManager:(id)a2;
- (int)launchCountAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appForAllIntentsBundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appIntent:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 bundleId:(id)a1;
- (unsigned long long)loadModelAtPath:(id)a0;
- (void)resetAppIntentLocationData;
- (void)trainWithCallback:(id /* block */)a0;

@end
