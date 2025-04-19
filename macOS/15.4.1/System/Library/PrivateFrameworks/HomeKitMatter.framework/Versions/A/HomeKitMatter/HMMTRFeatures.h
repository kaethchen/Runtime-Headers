@interface HMMTRFeatures : NSObject

+ (void)disableFeatureMatterRVCForTests;
+ (void)disableFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)disableFeatureiPhoneOnlyPairingControlForTests;
+ (void)enableFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)enableFeatureMatterRVCForTests;
+ (void)enableFeatureiPhoneOnlyPairingControlForTests;
+ (void)unsetFeatureMatterLocalFabricConfigEnabledForTests;
+ (void)unsetFeatureMatterRVCForTests;
+ (void)unsetFeatureiPhoneOnlyPairingControlForTests;

@end
