@class NSString;

@interface CPProfileDomainService : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate>

@property (retain) Class connectionHandlerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isRunningAsDaemon;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startListening;

@end
