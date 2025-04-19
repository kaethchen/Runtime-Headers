@interface SSGeneralResultBuilder : SSResultBuilder

+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (id)buildTitle;

@end
