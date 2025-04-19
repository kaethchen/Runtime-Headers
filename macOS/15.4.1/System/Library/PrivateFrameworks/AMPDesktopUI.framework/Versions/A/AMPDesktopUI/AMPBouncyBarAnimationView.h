@class NSColor;

@interface AMPBouncyBarAnimationView : NSView

@property (retain, nonatomic) NSColor *_contentTintColor;
@property (copy, nonatomic) NSColor *contentTintColor;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)init;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
