@interface NSScrubberSelectionStyle : NSObject <NSCoding>

@property (class, readonly) NSScrubberSelectionStyle *outlineOverlayStyle;
@property (class, readonly) NSScrubberSelectionStyle *roundedBackgroundStyle;

+ (id)nonHighlightingOutlineOverlayStyle;
+ (id)roundedBackgroundStyleWithTintColor:(id)a0;
+ (id)selectionStyleWithViewClass:(Class)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)makeSelectionView;

@end
