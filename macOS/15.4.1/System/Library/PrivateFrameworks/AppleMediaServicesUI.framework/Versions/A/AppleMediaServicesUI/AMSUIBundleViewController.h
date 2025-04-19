@class NSString, AMSBagKeySet, ACAccount;

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer> {
    ACAccount *account;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSString *placement;
@property (retain) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
