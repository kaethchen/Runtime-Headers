@class NSString, AMSBagKeySet;

@interface AMSAbsinthe : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataToSignFromRequest:(id)a0 bagDefinition:(id)a1;
+ (id)_signingDataFromRequest:(id)a0 buyParams:(id)a1 definitions:(id)a2;
+ (id)createBagForSubProfile;
+ (id)handleResponse:(id)a0 bag:(id)a1;
+ (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;


@end
