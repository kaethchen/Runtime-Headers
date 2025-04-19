@class NSString;

@interface WBSDevice : NSObject {
    struct MGNotificationTokenStruct { } *_notificationToken;
    NSString *_deviceTypeIdentifier;
}

@property (class, readonly, nonatomic) WBSDevice *currentDevice;

@property (copy, nonatomic, setter=_setUserAssignedName:) NSString *userAssignedName;
@property (copy, nonatomic, setter=test_setUserAssignedName:) NSString *test_userAssignedName;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, copy, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *userUniqueDeviceIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)unregisterForNotifications;

@end
