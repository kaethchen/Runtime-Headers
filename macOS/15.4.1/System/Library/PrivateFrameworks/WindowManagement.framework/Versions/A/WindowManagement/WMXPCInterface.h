@class NSString, NSXPCInterface;

@interface WMXPCInterface : NSObject

@property (class, readonly, copy) NSString *machServiceName;
@property (class, readonly, copy) NSString *machServiceLaunchNotificationName;
@property (class, readonly, copy) NSXPCInterface *clientXPCInterface;
@property (class, readonly, copy) NSXPCInterface *serverXPCInterface;

@end
