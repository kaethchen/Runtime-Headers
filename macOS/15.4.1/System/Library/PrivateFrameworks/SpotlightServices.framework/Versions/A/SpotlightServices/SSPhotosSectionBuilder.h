@interface SSPhotosSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;
+ (unsigned long long)maxVisibleColumnsInPhotosSection;

- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCardSections;
- (id)buildCollectionStyle;
- (BOOL)useHorizontallyScrollingCardSectionUI;

@end
