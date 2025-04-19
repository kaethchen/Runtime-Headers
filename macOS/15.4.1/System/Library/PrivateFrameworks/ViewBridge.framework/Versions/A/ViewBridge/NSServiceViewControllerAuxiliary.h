@class NSProxy, NSError, NSViewServiceMarshal, NSWindow;
@protocol NSXPCProxyCreating;

@interface NSServiceViewControllerAuxiliary : NSObject {
    NSWindow *serviceWindow;
    NSViewServiceMarshal *marshal;
    unsigned char invalid : 1;
    unsigned char didSetWindowContentView : 1;
    unsigned char makesExplicitResizeRequests : 1;
    unsigned char retainedMarshal : 1;
    unsigned char mostRecentCallToSetViewWasNonNil : 1;
    unsigned char willHaveOwnWindow : 1;
    unsigned int callsToSetViewCount;
    NSError *leastRecentError;
    unsigned int hostSDKVersion;
    NSProxy<NSXPCProxyCreating> *_remoteViewControllerProxy;
}

- (BOOL)hasOrWillHaveOwnWindow;

@end
