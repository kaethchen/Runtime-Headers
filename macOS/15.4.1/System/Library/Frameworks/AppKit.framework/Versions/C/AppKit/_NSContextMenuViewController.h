@class NSObject;
@protocol NSContextMenuLifecycleProtocol;

@interface _NSContextMenuViewController : NSViewController {
    NSObject<NSContextMenuLifecycleProtocol> *_impl;
}

- (void).cxx_destruct;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithContextMenuImpl:(id)a0;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;

@end
