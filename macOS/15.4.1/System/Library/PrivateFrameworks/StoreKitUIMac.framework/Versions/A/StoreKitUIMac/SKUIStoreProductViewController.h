@class NSObject, _SKUIStoreProductRemoteViewController;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SKUIStoreProductViewController : NSViewController {
    _SKUIStoreProductRemoteViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_loadProductQueue;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayout;
- (void)loadProductWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadRemoteViewController;
- (void)_serviceLoadProductWithParameters:(id)a0 completionHandler:(id /* block */)a1;

@end
