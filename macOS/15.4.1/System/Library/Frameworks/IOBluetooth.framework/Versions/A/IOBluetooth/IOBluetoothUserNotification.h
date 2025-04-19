@class NSString;

@interface IOBluetoothUserNotification : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)unregister;

@end
