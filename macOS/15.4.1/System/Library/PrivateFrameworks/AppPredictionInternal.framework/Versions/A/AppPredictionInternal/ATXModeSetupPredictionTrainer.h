@class NSString;

@interface ATXModeSetupPredictionTrainer : NSObject {
    NSString *_cacheBasePath;
    BOOL _modeIsEligibleForSetupPrediction;
}

- (id)init;
- (void).cxx_destruct;
- (void)train;
- (id)initWithCacheBasePath:(id)a0;
- (BOOL)modeIsCurrentlyCreated:(unsigned long long)a0;
- (BOOL)modeIsEligibleForSetupPrediction:(unsigned long long)a0;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1;
- (id)pathForModeSetupPredictionCacheWithDirectory:(id)a0;
- (void)persistPredictionScores:(id)a0;
- (BOOL)trainSetupPredictionIfModeAffinityWasTrainedRecentlyForMode:(unsigned long long)a0;
- (void)trainWithXPCActivity:(id)a0;
- (void)trainWithXPCActivity:(id)a0 shouldSkipRetrainingIfTrainedRecently:(BOOL)a1 shouldSkipEligiblilityCheckForSetupPrediction:(BOOL)a2;

@end
