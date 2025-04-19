@class NSString;

@interface EKRemoteXPCConnectionFactory : NSObject <EKXPCConnectionFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)_tryRegisterNewConnection;
+ (void)_unregisterConnection;

- (id)tryNewConnectionWithExportedObject:(id)a0 interruptionHandler:(id /* block */)a1;

@end
