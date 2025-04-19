@interface VideosUI.Router : NSObject <VUIControllerPresenter> {
    void /* unknown type, empty encoding */ currentTransaction;
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ presentingRoute;
    void /* unknown type, empty encoding */ managedRoutes;
    void /* unknown type, empty encoding */ multipleDocumentRoute;
    void /* unknown type, empty encoding */ tabSwitchSubject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)dismissViewControllerWithID:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)handleDocumentDataSource:(id)a0 targetResponder:(id)a1 appContext:(id)a2 documentOptions:(id)a3 completion:(id /* block */)a4;
- (void)handleNetworkChanges;
- (void)invokeAction:(id)a0 targetResponder:(id)a1 completion:(id /* block */)a2;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 actions:(id)a2 animated:(BOOL)a3;

@end
