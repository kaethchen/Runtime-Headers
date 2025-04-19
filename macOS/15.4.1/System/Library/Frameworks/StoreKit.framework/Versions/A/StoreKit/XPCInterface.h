@class NSString, NSXPCInterface;

@interface XPCInterface : NSObject

@property (class, readonly) NSXPCInterface *client;
@property (class, readonly) NSXPCInterface *service;
@property (class, readonly) NSString *serviceName;

@end
