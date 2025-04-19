@class NSSet, NSArray;

@interface SSSearchInAppSectionBuilder : SSSectionBuilder

@property (retain, nonatomic) NSSet *bundleIdentifiersForHiddenSections;
@property (retain, nonatomic) NSArray *searchInAppInfo;

+ (id)cachedPreferredStoreBundleIdentifier;
+ (id)supportedBundleId;

- (void).cxx_destruct;
- (id)buildSection;
- (BOOL)shouldSkipSection;

@end
