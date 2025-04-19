@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSQRCodeDialogTask;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAgeVerificationTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSQRCodeDialogTask *task;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *options;
@property (retain) NSString *pincode;
@property (readonly) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_errorCheckWithAccount:(id)a0 bag:(id)a1;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)performTask;
- (id)_performTaskForAccount:(id)a0 withBag:(id)a1;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (void)_handleAccountStoreDidChangeNotification:(id)a0 at:(id)a1;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (id)initWithAccount:(id)a0 bag:(id)a1 options:(id)a2 presentationDelegate:(id)a3;
- (id)isVerificationNeeded;

@end
