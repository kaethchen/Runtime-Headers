@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)buildCompactCard;
- (id)resultIdentifier;
- (id)buildInlineCard;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildResult;

@end
