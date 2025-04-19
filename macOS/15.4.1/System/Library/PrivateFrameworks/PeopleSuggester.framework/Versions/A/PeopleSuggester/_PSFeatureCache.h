@class NSUserDefaults, BMSource, _PSPredictionContext, NSArray, NSSet, NSMutableDictionary, _CDInteractionStore, NSObject, _PSHistogramFeatureData, _PSShareSheetEphemeralFeatureManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PSFeatureCache : NSObject {
    _PSPredictionContext *_context;
    NSSet *_candidates;
    _CDInteractionStore *_store;
    _PSHistogramFeatureData *_histogramFeatureData;
    NSArray *_caches;
    NSMutableDictionary *_cache;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSUserDefaults *_psDefaults;
    unsigned long long _timeDelay;
    unsigned long long _leeway;
    BMSource *_virtualFeatureStreamSource;
}

@property (retain, nonatomic) _PSShareSheetEphemeralFeatureManager *ephemeralFeatureManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)deviceIdentifier;
- (id)addSelfToCandidates:(id)a0;
- (id)computeEphemeralFeaturesWithCandidates:(id)a0 context:(id)a1;
- (id)fetchFeaturesWithCandidates:(id)a0 context:(id)a1;
- (id)getHistogramFeatureData;
- (id)initWithPredictionContext:(id)a0 candidates:(id)a1 caches:(id)a2 store:(id)a3;
- (void)invalidateAndRefreshCache;
- (BOOL)isCacheEmpty;
- (BOOL)isDurableFeaturesSetAdmissible;
- (id)privacyMitigateFeatures:(id)a0;
- (void)refreshDurableCachesWithCandidates:(id)a0;
- (void)replaceEphemeralFeaturesWithCache:(id)a0;
- (void)saveToVirtualStore;
- (void)setFeatureValueForFeatureName:(int)a0 featureValue:(id)a1 candidate:(id)a2 bundleID:(id)a3;
- (void)setPredictionContextWithContext:(id)a0;

@end
