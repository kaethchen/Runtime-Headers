@class NSString, SKUIRemoteEngagementViewController, NSDictionary, NSData, NSError, NSObject, NSViewController;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SKEngagementRemoteViewTask : NSObject <SKUIRemoteEngagementClientProtocol>

@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain) NSError *error;
@property (retain) SKUIRemoteEngagementViewController *remoteViewController;
@property (retain) NSData *requestData;
@property (retain) NSDictionary *result;
@property (retain) NSData *resultData;
@property (retain) NSViewController *viewController;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentEngagement;
- (void)_presentViewController:(id)a0;
- (void)_unblock;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)engagementTaskDidFinishWithResult:(id)a0 resultData:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithRequestData:(id)a0 presentingViewController:(id)a1;

@end
