@class NSString;
@protocol PKProvisioningAnalyticsSessionReportingResponder;

@interface PKProvisioningAnalyticsSessionReporter : NSObject

@property (weak, nonatomic) id<PKProvisioningAnalyticsSessionReportingResponder> responder;
@property (nonatomic) NSString *sessionID;

- (void).cxx_destruct;
- (void)reportEvent:(id)a0;
- (void)_populateDictionary:(id)a0 withError:(id)a1;
- (id)initWithResponder:(id)a0 sessionID:(id)a1;
- (void)reportError:(id)a0 context:(id)a1;
- (void)reportOtherError:(id)a0 context:(id)a1;
- (void)resetProductTypes;
- (void)setProductType:(id)a0 subtype:(id)a1;
- (void)setSetupProduct:(id)a0;

@end
