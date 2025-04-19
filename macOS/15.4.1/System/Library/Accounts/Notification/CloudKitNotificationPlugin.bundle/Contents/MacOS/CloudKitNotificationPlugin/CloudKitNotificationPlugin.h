@class NSString, CKXPCConnection;

@interface CloudKitNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly, nonatomic) CKXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
