@class NSString, NSUUID, NSXPCListenerEndpoint;

@interface NSRemoteViewControllerParameters : NSRemoteViewControllerParametersForService

@property (copy) NSString *serviceBundleIdentifier;
@property (retain) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (retain) NSUUID *serviceInstanceIdentifier;

- (void)dealloc;

@end
