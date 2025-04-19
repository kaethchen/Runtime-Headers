@class NSString;

@interface PKProvisioningAnalyticsSessionUIReporter : PKProvisioningAnalyticsSessionReporter

@property (retain, nonatomic) NSString *pageTag;

- (void).cxx_destruct;
- (void)reportEvent:(id)a0;
- (id)initWithResponder:(id)a0 sessionID:(id)a1 pageTag:(id)a2;
- (void)reportButtonPressed:(unsigned long long)a0;
- (void)reportButtonPressed:(unsigned long long)a0 context:(id)a1;
- (void)reportOtherButtonPressed:(id)a0;
- (void)reportOtherButtonPressed:(id)a0 context:(id)a1;
- (void)reportPageCompleted:(BOOL)a0 context:(id)a1;
- (void)reportViewAppeared;
- (void)reportViewAppearedWithContext:(id)a0;

@end
