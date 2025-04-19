@class SKUIStoreProductViewController;
@protocol SKStoreProductViewControllerDelegate;

@interface SKStoreProductViewController : NSViewController {
    SKUIStoreProductViewController *_productViewController;
}

@property (weak, nonatomic) id<SKStoreProductViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)loadProductWithParameters:(id)a0 completionBlock:(id /* block */)a1;

@end
