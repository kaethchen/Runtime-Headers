@interface PKProvisioningAnalyticsSessionStepReporter : PKProvisioningAnalyticsSessionReporter

- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1;
- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1 error:(id)a2;
- (void)setProvisionedPass:(id)a0;

@end
