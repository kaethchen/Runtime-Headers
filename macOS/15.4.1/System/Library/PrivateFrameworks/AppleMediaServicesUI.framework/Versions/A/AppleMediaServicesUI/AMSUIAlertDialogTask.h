@class NSAlert, AMSDialogRequest, NSViewController;

@interface AMSUIAlertDialogTask : AMSTask

@property (weak) NSAlert *alert;
@property (readonly) AMSDialogRequest *request;
@property (readonly) NSViewController *presentingViewController;

+ (id)_convertTextField:(id)a0;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)present;
- (id)_createMacAlertFromRequest:(id)a0;
- (void)_presentMacAlertFromRequest:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;

@end
