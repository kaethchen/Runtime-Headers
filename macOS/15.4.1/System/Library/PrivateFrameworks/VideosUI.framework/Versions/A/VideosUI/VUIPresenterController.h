@interface VUIPresenterController : NSObject

+ (long long)_modalPresentationStyleFromPresentationStyle:(long long)a0;
+ (void)dismissViewController:(id)a0 completion:(id /* block */)a1;
+ (void)popOrDismissViewController:(id)a0 completion:(id /* block */)a1;
+ (void)popViewController:(id)a0 completion:(id /* block */)a1;
+ (void)presentViewController:(id)a0 fromViewController:(id)a1 WithConfiguration:(id)a2 completion:(id /* block */)a3;
+ (void)pushViewController:(id)a0 fromViewController:(id)a1 withZoomTransition:(BOOL)a2 sourceView:(id)a3 presentationSourceID:(id)a4 isAnimated:(BOOL)a5 completion:(id /* block */)a6;

@end
