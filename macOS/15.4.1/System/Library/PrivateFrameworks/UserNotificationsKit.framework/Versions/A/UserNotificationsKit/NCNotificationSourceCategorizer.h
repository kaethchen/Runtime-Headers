@interface NCNotificationSourceCategorizer : NSObject

+ (BOOL)bundleIdEligibleForSummarization:(id)a0;
+ (unsigned long long)categoryOfBundleId:(id)a0;
+ (BOOL)cateogryEligibleForSummarization:(unsigned long long)a0;
+ (void)resetCachedCategories;

- (id)init;

@end
