@interface HMDMetricsUtilities : NSObject

+ (id)primaryServiceTypeForHAPAccessory:(id)a0;
+ (id)redactedThirdPartyBundleID:(id)a0;
+ (id)redactedThirdPartyBundleID:(id)a0 isInternalBuild:(BOOL)a1;
+ (BOOL)shouldRedactBundleID:(id)a0;
+ (BOOL)shouldRedactBundleID:(id)a0 isInternalBuild:(BOOL)a1;

@end
