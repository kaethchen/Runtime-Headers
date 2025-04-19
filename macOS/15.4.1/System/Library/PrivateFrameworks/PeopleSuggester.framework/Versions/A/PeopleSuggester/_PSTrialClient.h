@class _PASLock, NSUserDefaults;

@interface _PSTrialClient : NSObject {
    NSUserDefaults *_userDefaults;
    _PASLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (double)maxComputationTime;
- (id)recipe;
- (void)updateFactors;
- (unsigned long long)integerForKey:(id)a0 withDefaultValue:(unsigned long long)a1;
- (BOOL)shouldComputePhotoBasedFeatures;
- (id)additionalFeaturesToCompute;
- (id)arrayForKey:(id)a0 withDefaultValue:(id)a1;
- (id)arrayOfArraysForKey:(id)a0 withDefaultValue:(id)a1;
- (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (id)configWithAnchorDate:(id)a0;
- (int)dataCollectionTimeToWaitInSeconds;
- (double)doubleForKey:(id)a0 withDefaultValue:(double)a1;
- (id)getTrialExperiment;
- (id)loadCoreMLModel:(id)a0 config:(id)a1;
- (id)mutableDictionaryForKey:(id)a0 withDefaultValue:(id)a1;
- (id)psHeuristicsOverrides;
- (id)rankingModel;
- (id)scenesBasedFeatures;
- (id)scenesMinimumNumberOfTags;
- (BOOL)shouldActivatePSR;
- (BOOL)shouldEnableDataCollection;
- (BOOL)shouldProcessPicturesLive;
- (id)stringForKey:(id)a0 withDefaultValue:(id)a1;
- (id)suggestionProxyOrder;
- (id)userDefaultArrayValueForKey:(id)a0 defaultToValue:(id)a1;
- (BOOL)userDefaultBoolValueForKey:(id)a0 defaultToValue:(BOOL)a1;
- (double)userDefaultDoubleValueForKey:(id)a0 defaultToValue:(double)a1;
- (unsigned long long)userDefaultIntegerValueForKey:(id)a0 defaultToValue:(unsigned long long)a1;
- (id)userDefaultMutableDictionaryForKey:(id)a0 defaultToValue:(id)a1;
- (id)userDefaultStringValueForKey:(id)a0 defaultToValue:(id)a1;

@end
