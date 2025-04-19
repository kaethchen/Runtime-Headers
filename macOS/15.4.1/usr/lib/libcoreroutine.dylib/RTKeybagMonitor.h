@interface RTKeybagMonitor : NSObject

- (int)getDeviceLockState;
- (BOOL)getUnlockedSinceBoot;
- (BOOL)lockDevice;

@end
