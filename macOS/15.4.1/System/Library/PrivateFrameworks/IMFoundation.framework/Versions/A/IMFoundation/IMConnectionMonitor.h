@class NSString;
@protocol IMConnectionMonitorDelegate;

@interface IMConnectionMonitor : NSObject

@property (readonly, nonatomic) BOOL isImmediatelyReachable;
@property (readonly, nonatomic) BOOL requiresDataConnectionActivation;
@property (nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;
@property (weak, nonatomic) id<IMConnectionMonitorDelegate> delegate;
@property (readonly, retain, nonatomic) NSString *remoteHost;

+ (id)alloc;

- (void).cxx_destruct;
- (void)clear;
- (void)_setup;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)goDisconnected;
- (id)initWithRemoteHost:(id)a0 delegate:(id)a1;

@end
