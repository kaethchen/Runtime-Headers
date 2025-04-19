@interface NSTouchBarCustomizationPreviewLayoutAttributes : NSCollectionViewLayoutAttributes

@property long long itemState;
@property (getter=isEditable) BOOL editable;
@property (getter=isSpace) BOOL isSpace;
@property BOOL showsAppState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
