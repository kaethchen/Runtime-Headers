@class NSString, AMSBagKeySet;

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adprivacydBag;
+ (void)isDisabledAdsPrefetch:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (BOOL)isSubsequentAdsFetchDisabled;
+ (void)isSubsequentAdsFetchDisabled:(id)a0 withCompletionHandler:(id /* block */)a1;


@end
