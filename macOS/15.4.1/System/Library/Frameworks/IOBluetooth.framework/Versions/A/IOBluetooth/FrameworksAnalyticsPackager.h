@interface FrameworksAnalyticsPackager : NSObject

+ (id)sharedPackager;

- (id)init;
- (void)sendFirmwareUpdateSuccessResult;
- (void)packageAndSendToBTD:(id)a0;

@end
