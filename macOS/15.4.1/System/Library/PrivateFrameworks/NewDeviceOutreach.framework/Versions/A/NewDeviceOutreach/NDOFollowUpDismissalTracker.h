@interface NDOFollowUpDismissalTracker : NSObject

+ (id)uniqueIdentfierForSerialNumber:(id)a0;
+ (id)_dismissedSerialNumberHashes;
+ (void)eraseAllFollowUpDismissals;
+ (void)eraseFollowUpDismissalForDeviceSerial:(id)a0;
+ (BOOL)followUpIsDismissedForSerial:(id)a0;
+ (void)storeFollowUpDismissalWithDeviceSerial:(id)a0;

@end
