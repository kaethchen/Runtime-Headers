@class SKUIStoreProductViewController, NSString, NSButton, NSWindow;
@protocol StoreProductPageMacHelperDelegate;

@interface StoreProductPageMacHelperViewController : NSViewController <StoreProductPageMacHelper> {
    NSButton *_doneButton;
    NSWindow *_panelWindow;
    NSWindow *_presentingWindow;
    SKUIStoreProductViewController *_productViewController;
}

@property (weak) id<StoreProductPageMacHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)dismissSheet;
- (void)loadProductWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentSheetOverWindow:(id)a0;
- (void)doneButtonClicked:(id)a0;

@end
