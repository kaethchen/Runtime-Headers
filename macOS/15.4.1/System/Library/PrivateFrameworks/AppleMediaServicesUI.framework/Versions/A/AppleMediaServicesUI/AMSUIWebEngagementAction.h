@class NSArray, NSDictionary, NSString, AMSUIWebClientContext;

@interface AMSUIWebEngagementAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly) NSDictionary *event;
@property (readonly) NSArray *messagePlacements;
@property (readonly) NSString *messageServiceType;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_resultFromMessageResponse:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
