@class NSArray, AMSUIWebClientContext, NSString, AMSMetricsEvent;

@interface AMSUIWebAction : NSObject <AMSUIWebActionRunnable>

@property (readonly) AMSMetricsEvent *actionEvent;
@property (retain) NSArray *acceptedResponseVersions;
@property (retain) AMSUIWebClientContext *context;
@property (readonly, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (readonly, nonatomic) NSString *presentingSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithContext:(id)a0;
- (id)initWithContext:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
