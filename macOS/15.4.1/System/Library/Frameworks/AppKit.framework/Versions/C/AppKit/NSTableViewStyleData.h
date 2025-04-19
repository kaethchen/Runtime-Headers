@interface NSTableViewStyleData : NSObject <NSCopying>

@property long long effectiveStyle;
@property long long rowSizeStyle;
@property (readonly) long long tableViewStyle;
@property (readonly) BOOL hasInsetContent;
@property (readonly) BOOL hasPaddedContent;
@property (readonly) BOOL isSourceList;
@property double rowHeight;
@property double groupRowHeight;
@property double headerHeight;
@property struct CGSize { double width; double height; } intercellSpacing;
@property double intergroupSpacing;
@property double topPadding;
@property double bottomPadding;
@property BOOL wantsUniformInsetsForSingleColumn;
@property double rowContentPadding;
@property double rowContentInset;
@property double rowBackgroundInset;
@property double cornerRadius;
@property long long selectionMaterial;
@property double rowActionsGroupSpacing;
@property double rowActionButtonSpacing;
@property double rowActionButtonCornerRadius;
@property double indentationPerLevel;
@property double disclosureButtonLeadingSpacing;
@property double disclosureButtonWidth;
@property double disclosureButtonTrailingSpacing;

+ (id)defaultStyleData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithEffectiveStyle:(long long)a0;
- (id)initWithEffectiveStyle:(long long)a0 rowSizeStyle:(long long)a1;

@end
