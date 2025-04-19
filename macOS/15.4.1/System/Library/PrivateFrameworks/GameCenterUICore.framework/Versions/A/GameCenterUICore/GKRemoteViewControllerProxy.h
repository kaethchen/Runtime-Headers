@class NSString, GKRemoteViewController;

@interface GKRemoteViewControllerProxy : NSObject <GKRemoteViewControllerHostProtocol>

@property (weak, nonatomic) GKRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)gkHostViewControllerInterface;
+ (id)gkServiceViewControllerInterface;

- (void).cxx_destruct;
- (void)messageFromService:(id)a0;
- (void)serviceRequestsDismiss;

@end
