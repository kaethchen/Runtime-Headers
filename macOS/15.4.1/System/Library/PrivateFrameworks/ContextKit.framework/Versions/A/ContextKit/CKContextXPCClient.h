@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)xpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
+ (void)invalidateXpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;

@end
