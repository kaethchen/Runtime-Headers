@class ACAccount, NSString, AMSProcessInfo, AMSBagKeySet, ACAccountStore, AMSURLSession, AMSURLRequestEncoder;
@protocol AMSBagProtocol;

@interface AMSAccountDeviceInfoTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSURLSession *session;
@property (retain) AMSURLRequestEncoder *requestEncoder;
@property (retain) NSString *serialNumber;
@property (retain) ACAccountStore *accountStore;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)perform;
- (id)_deviceInfoRequest;
- (id)_requestWithURL:(id)a0;
- (id)_updateAccountWithInfo:(id)a0;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bag:(id)a2;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bag:(id)a2 requestEncoder:(id)a3 session:(id)a4 serialNumber:(id)a5;

@end
