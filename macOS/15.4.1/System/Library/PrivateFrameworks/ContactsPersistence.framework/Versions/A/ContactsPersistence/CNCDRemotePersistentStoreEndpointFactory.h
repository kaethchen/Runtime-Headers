@class NSURL, NSString;

@interface CNCDRemotePersistentStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>

@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
