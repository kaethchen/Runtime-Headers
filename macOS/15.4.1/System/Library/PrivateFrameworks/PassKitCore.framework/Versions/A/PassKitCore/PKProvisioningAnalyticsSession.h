@class NSString, NSMutableDictionary;

@interface PKProvisioningAnalyticsSession : NSObject <PKProvisioningAnalyticsSessionReportingResponder> {
    NSString *_sessionID;
    NSString *_environment;
    NSString *_intent;
    NSString *_referralSource;
    NSString *_productTypeDescriptor;
    NSString *_productSubtypeDescriptor;
    NSMutableDictionary *_productMetadata;
    NSMutableDictionary *_passMetadata;
    NSString *_subject;
    BOOL _didBeginWalletProvisioningSubject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)continueAnalyticsSessionForEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2 archivedParent:(id)a3;
+ (id)startAnalyticsSessionForEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2;

- (void).cxx_destruct;
- (void)stop;
- (void)_clearEnvironmentValues;
- (void)_reportEvent:(id)a0;
- (id)archivedParentToken;
- (id)createStepReporter;
- (id)createViewReporterForPage:(id)a0;
- (void)didReceiveEvent:(id)a0;
- (id)initWithEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2;
- (id)initWithEnvironment:(id)a0 intent:(id)a1 referralSource:(id)a2 archivedParent:(id)a3;
- (void)resetForNewProductSetup;
- (void)resetProductTypes;
- (void)setPass:(id)a0;
- (void)setProductType:(id)a0 subtype:(id)a1;
- (void)setSetupProduct:(id)a0;

@end
