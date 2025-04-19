@class NSString;

@interface SUTestDefaults : NSObject {
    NSString *_testMode;
}

+ (id)sharedDefaults;

- (void)dealloc;
- (id)currentTestMode;
- (BOOL)attemptToEnterTestMode:(id)a0;
- (void)exitTestMode;
- (BOOL)inDevKeyMode;
- (BOOL)inProductionMode;
- (BOOL)inThirdPartyMode;
- (BOOL)okayToUseNonProductionMode;
- (int)requiredPackageTrustLevelForCurrentMode;

@end
