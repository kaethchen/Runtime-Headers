@class NSDictionary, NSString, AMSUIWebClientContext;

@interface AMSUIWebODIAssessmentAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain) NSDictionary *additionalAttributes;
@property (retain) NSString *rawAccountType;
@property (retain) NSString *rawBundleIdentifer;
@property (retain) NSString *rawSessionIdentifer;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
