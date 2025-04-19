@class NSString, SKUIRemoteEngagementRemoteViewController, NSObject;
@protocol OS_dispatch_queue, SKUIRemoteEngagementClientProtocol, OS_dispatch_semaphore;

@interface SKUIRemoteEngagementViewController : NSViewController <SKUIRemoteEngagementViewServiceProtocol>

@property (retain) SKUIRemoteEngagementRemoteViewController *remoteViewController;
@property (readonly) NSObject<OS_dispatch_queue> *engagementRequestQueue;
@property (readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore;
@property (weak, nonatomic) id<SKUIRemoteEngagementClientProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)presentEngagementRequestData:(id)a0 completion:(id /* block */)a1;
- (void)_loadRemoteViewController;

@end
