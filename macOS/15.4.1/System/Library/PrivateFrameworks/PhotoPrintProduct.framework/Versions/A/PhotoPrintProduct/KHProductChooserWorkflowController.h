@class NSString, KHThemeChooserViewController, KHProductChooserViewController, NSDictionary, UXViewController, KHProduct;
@protocol KHProductChooserWorkflowDelegate;

@interface KHProductChooserWorkflowController : NSObject <KHProductChooserViewControllerDelegate, KHThemeChooserViewControllerDelegate> {
    KHProductChooserViewController *_productChooserViewController;
    KHThemeChooserViewController *_themeChooserViewController;
    KHProduct *_selectedProduct;
    NSDictionary *_selectedProductConfigOptions;
}

@property (readonly, nonatomic) long long projectType;
@property (readonly, nonatomic) UXViewController *productChooserViewController;
@property (readonly, nonatomic) KHThemeChooserViewController *themeChooserViewController;
@property (weak, nonatomic) id<KHProductChooserWorkflowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_productCodesForCardProductFamily:(unsigned long long)a0;
- (id)initWithProjectType:(long long)a0;
- (void)themeChooserViewController:(id)a0 choseThemeProvider:(id)a1;
- (void)userSelectedProduct:(id)a0 configuredWithOptions:(id)a1 inViewController:(id)a2;

@end
