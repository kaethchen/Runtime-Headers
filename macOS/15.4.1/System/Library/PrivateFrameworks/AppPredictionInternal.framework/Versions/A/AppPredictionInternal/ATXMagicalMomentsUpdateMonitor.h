@class PMMPredictionNotification, NSDictionary, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXMagicalMomentsUpdateMonitor : NSObject {
    NSDictionary *_predictionMap;
    NSDate *_expiration;
    unsigned long long _mmPredictionCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    PMMPredictionNotification *_mmUpdateListener;
}

@property (readonly, nonatomic) unsigned long long limit;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0;
- (void)updatePredictionsWith:(id)a0 consumer:(unsigned long long)a1;
- (void)_setPredictions:(id)a0 expiration:(id)a1 totalPredictionCount:(unsigned long long)a2;
- (void)dropCacheIfExpired;
- (unsigned long long)mmPredictionCount;
- (id)predictionsForBundleId:(id)a0;
- (void)setupUpdateListener;

@end
