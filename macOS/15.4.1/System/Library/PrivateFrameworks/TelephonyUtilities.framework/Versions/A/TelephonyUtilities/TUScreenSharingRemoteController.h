@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, TUScreenSharingRemoteControlProvider, TUScreenSharingRemoteControllerDelegate;

@interface TUScreenSharingRemoteController : NSObject <TUScreenSharingRemoteControlProviderDelegate>

@property BOOL presenterAllowsRequestingControl;
@property (copy) NSSet *participantsRequestingControl;
@property (copy) NSSet *participantsGrantedControl;
@property long long remoteControlState;
@property BOOL clientSideCursorAvailable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<TUScreenSharingRemoteControlProvider> provider;
@property (weak) id<TUScreenSharingRemoteControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)relinquishControlWithCompletionHandler:(id /* block */)a0;
- (void)remoteControlProvider:(id)a0 clientSideCursorUpdated:(BOOL)a1;
- (void)remoteControlProvider:(id)a0 controlRevokedWithError:(id)a1;
- (void)remoteControlProvider:(id)a0 dataReceivedFromPresenter:(id)a1;
- (void)remoteControlProvider:(id)a0 participantsGrantedControlChanged:(id)a1;
- (void)remoteControlProvider:(id)a0 participantsRequestingControlChanged:(id)a1;
- (void)remoteControlProvider:(id)a0 presenterAllowsRequestingControlChanged:(BOOL)a1;
- (void)remoteControlProvider:(id)a0 stateChanged:(long long)a1;
- (void)remoteControlProviderInvalidated:(id)a0;
- (void)requestControlWithCompletionHandler:(id /* block */)a0;
- (void)sendDataToPresenter:(id)a0 completionHandler:(id /* block */)a1;
- (void)setControlGranted:(BOOL)a0 forParticipants:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPresenterAllowsRequestingControl:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
