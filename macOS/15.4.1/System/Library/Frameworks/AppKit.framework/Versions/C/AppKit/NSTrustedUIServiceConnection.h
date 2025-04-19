@class NSXPCConnection;

@interface NSTrustedUIServiceConnection : NSObject

@property (class, readonly) NSXPCConnection *mainConnection;

@end
