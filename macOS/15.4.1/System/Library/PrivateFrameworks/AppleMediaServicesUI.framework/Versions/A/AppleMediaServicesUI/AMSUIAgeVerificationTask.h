@class NSString, NSViewController, AMSBagKeySet, ACAccount, NSDictionary, AMSAgeVerificationTask;
@protocol AMSBagProtocol;

@interface AMSUIAgeVerificationTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSAgeVerificationTask *task;
@property (retain) NSViewController *viewController;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *options;
@property (retain) NSString *pincode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateFormatter;
+ (id)_errorCheckWithAccount:(id)a0 bag:(id)a1;
+ (id)createBagForSubProfile;
+ (id)_dialogForResult:(id)a0 withBag:(id)a1 expiration:(id)a2 dateFormatter:(id)a3;
+ (id)_promiseResultForOpeningURL:(id)a0;

- (void).cxx_destruct;
- (id)performTask;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (id)isVerificationNeeded;
- (id)_performTaskWithVerificationResult:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 options:(id)a2 viewController:(id)a3;

@end
