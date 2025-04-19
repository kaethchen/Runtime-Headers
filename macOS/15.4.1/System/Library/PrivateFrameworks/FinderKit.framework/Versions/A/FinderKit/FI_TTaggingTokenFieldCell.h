@class NSObject;

@interface FI_TTaggingTokenFieldCell : NSTokenFieldCell {
    NSObject *_objectValue;
    BOOL _didAddLastTagPlaceholder;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceholderString:(id)a0;
- (id)accessibilityChildrenAttributeValue;
- (id)accessibilitySharedFocusAttributeValue;
- (double)cellHeightForRows:(double)a0;

@end
