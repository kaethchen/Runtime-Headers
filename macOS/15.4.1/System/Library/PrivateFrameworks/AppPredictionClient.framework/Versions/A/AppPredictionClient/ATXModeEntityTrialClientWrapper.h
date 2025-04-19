@class _PASLock;

@interface ATXModeEntityTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(int)a0;
- (void)updateFactors;
- (id)modeAffinityAppCategoryScores;
- (id)modeAffinityModelsConstants;
- (id)notificationModeEntityModelWeights;
- (id)widgetModeEntityModelWeights;

@end
