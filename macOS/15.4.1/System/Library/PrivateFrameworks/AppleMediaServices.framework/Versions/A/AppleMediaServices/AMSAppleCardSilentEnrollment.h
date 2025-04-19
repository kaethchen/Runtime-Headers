@class NSString, AMSBagKeySet;

@interface AMSAppleCardSilentEnrollment : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)gsTokenForAccount:(id)a0 error:(id *)a1;
+ (id)headersForAccount:(id)a0;


@end
