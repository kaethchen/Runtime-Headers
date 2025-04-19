@class NSString, AMSUIWebClientContext;

@interface AMSUIWebBusinessChatAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSString *body;
@property (retain) NSString *businessID;
@property (retain) NSString *businessGroupID;
@property (retain) NSString *intentID;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)makeBusinessChatDeeplink;
- (id)runAction;

@end
