@interface UnifiedFieldCompletionStyledTableCellView : TableCellViewWithCustomHighlightedViews

+ (id)_descriptionLeadInTextAttributes;
+ (id)_descriptionLeadInTextAttributesWithWrapping:(BOOL)a0;
+ (id)_descriptionSelectedTextColor;
+ (id)_descriptionTextAttributes;
+ (id)_descriptionTextAttributesWithStyle:(long long)a0;
+ (id)_descriptionTextAttributesWithWrapping:(BOOL)a0;
+ (double)_descriptionTextLineHeight;
+ (id)_footnoteTextAttributes;
+ (id)_titleSelectedTextColor;
+ (id)_titleTextAttributes;
+ (id)_titleTextAttributesWithLineBreakMode:(unsigned long long)a0 isSelected:(BOOL)a1 hasRangesToHighlight:(BOOL)a2;
+ (id)_titleTextAttributesWithWrapping:(BOOL)a0;
+ (double)_titleTextLineHeight;
+ (id)headerTextAttributes;

- (double)_preferredMaxLayoutWidthForTextField:(id)a0;
- (void)_setAttributedStringValue:(id)a0 highlightedAttributedStringValue:(id)a1 ofLabel:(id)a2;
- (void)_setAttributedStringValue:(id)a0 highlightedTextColor:(id)a1 ofLabel:(id)a2;
- (void)_setAttributedStringValue:(id)a0 ofDescriptionLabel:(id)a1;
- (void)_setAttributedStringValue:(id)a0 ofTitleLabel:(id)a1;
- (void)_setImage:(id)a0 ofGlyphImageView:(id)a1;

@end
