@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (BOOL)wantsTitleAndCaptionUUIDs;

- (int)kind;
- (BOOL)isSelectable;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (Class)layoutClass;
- (Class)repClass;
- (id)instructionalText;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)copyToInstantiateTemplatePlaceholder;
- (void)loadFromUnarchiver:(id)a0;

@end
