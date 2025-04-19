@class FBSDisplayLayoutMonitor;

@interface WFOnScreenContentManager : NSObject

@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (copy, nonatomic) id /* block */ visibleApplicationFetchCompletionHandler;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)init;
- (void).cxx_destruct;
- (void)getOnScreenContentWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)getOnScreenContentWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishGettingVisibleApplicationsWithLayout:(id)a0;
- (void)getContentForLayoutElement:(id)a0 serviceOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)getNodeForGlobalUserActivityWithCompletionHandler:(id /* block */)a0;
- (void)getVisibleApplicationsWithCompletionHandler:(id /* block */)a0;
- (id)visibleApplicationsFromLayout:(id)a0;

@end
