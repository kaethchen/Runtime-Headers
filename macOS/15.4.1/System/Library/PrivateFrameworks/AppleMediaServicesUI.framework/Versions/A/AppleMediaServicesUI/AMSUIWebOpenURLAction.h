@class NSURL, NSString, AMSUIWebClientContext;

@interface AMSUIWebOpenURLAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property long long type;
@property (retain) NSURL *URL;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_openUniversalLink:(id)a0;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
