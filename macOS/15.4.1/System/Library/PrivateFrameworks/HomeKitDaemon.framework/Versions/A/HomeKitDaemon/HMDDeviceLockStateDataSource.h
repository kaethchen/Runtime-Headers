@interface HMDDeviceLockStateDataSource : HMFObject

@property (readonly) BOOL isLocked;
@property (readonly) BOOL isPasscodeEnabled;
@property (readonly) BOOL isUnlockedWithAutoLoginOrAutoLockDisabled;

@end
