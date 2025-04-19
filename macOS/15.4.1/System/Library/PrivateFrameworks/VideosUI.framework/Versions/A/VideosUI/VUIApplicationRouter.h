@interface VUIApplicationRouter : NSObject

+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
+ (id)currentNavigationController;
+ (BOOL)_handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4 extraInfo:(id *)a5;
+ (void)_performForType:(long long)a0 targetResponder:(id)a1 appContext:(id)a2 eventDataSource:(id)a3 documentOptions:(id)a4;
+ (id)_viewControllerWithIdentifier:(id)a0;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)a0;
+ (void)dismissOrPopViewControllerWithId:(id)a0 completion:(id /* block */)a1;
+ (void)dismissPresentedViewController;
+ (id)eventDataSourceForEvent:(id)a0 routerDataSource:(id)a1;
+ (BOOL)handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
+ (BOOL)handleEvent:(id)a0 targetResponder:(id)a1 appContext:(id)a2 routerDataSource:(id)a3 supplementaryData:(id)a4 extraInfo:(id *)a5;
+ (void)invokeAction:(id)a0 primaryAction:(id)a1 targetResponder:(id)a2 completion:(id /* block */)a3;
+ (void)invokeAction:(id)a0 targetResponder:(id)a1 completion:(id /* block */)a2;
+ (void)processAndPresentAMSWebURL:(id)a0 withAuthSupport:(BOOL)a1;
+ (id)topMostVisibleViewController;
+ (id)topPresentedViewController;

@end
