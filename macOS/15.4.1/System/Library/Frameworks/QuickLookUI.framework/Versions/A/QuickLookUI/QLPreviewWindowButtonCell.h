@interface QLPreviewWindowButtonCell : NSButtonCell

+ (id)accessibilityIdentifier;
+ (id)buttonImage;
+ (id)buttonAlternateImage;
+ (id)buttonRolloverImage;
+ (SEL)buttonSelector;

- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;

@end
