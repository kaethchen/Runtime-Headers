@class NSExtensionContext, NCRemoteViewServiceWindow;

@interface NCRemoteViewService : NSServiceViewController {
    BOOL _registeredObservers;
}

@property (readonly, nonatomic) NCRemoteViewServiceWindow *serviceWindow;
@property (weak, nonatomic) NSExtensionContext *extensionContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)allowsImplicitResizeRequests;
- (unsigned long long)awakeFromRemoteView;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;

@end
