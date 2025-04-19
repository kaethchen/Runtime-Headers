@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)_setDragging:(BOOL)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (BOOL)isAccessibilityElement;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)_isTranscriptCollectionViewItem;

@end
