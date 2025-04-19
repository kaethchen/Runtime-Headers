@class NSString, NSViewController, AMSBagKeySet, ACAccount, AMSAutomaticDownloadKindsSetTask, NSArray;
@protocol AMSBagProtocol;

@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSAutomaticDownloadKindsSetTask *task;
@property (retain) NSViewController *viewController;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSArray *enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithEnabledMediaKinds:(id)a0 account:(id)a1 bag:(id)a2 viewController:(id)a3;

@end
