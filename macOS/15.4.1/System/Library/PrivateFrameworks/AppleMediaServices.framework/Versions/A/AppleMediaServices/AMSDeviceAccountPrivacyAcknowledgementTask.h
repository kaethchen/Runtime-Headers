@class NSString, AMSBagKeySet, ACAccount;
@protocol AMSBagProtocol;

@interface AMSDeviceAccountPrivacyAcknowledgementTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)performPrivacyAcknowledgement;

@end
