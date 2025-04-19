@class NSArray, AMSUIWebClientContext, NSString, AMSDialogRequest;

@interface AMSUIWebDialogAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property BOOL pauseTimeouts;
@property (retain) NSArray *buttonModels;
@property (retain) AMSDialogRequest *request;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
