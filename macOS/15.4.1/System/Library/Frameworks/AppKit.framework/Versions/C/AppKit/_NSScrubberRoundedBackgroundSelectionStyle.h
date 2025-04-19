@class NSColor;

@interface _NSScrubberRoundedBackgroundSelectionStyle : NSScrubberSelectionStyle

@property (copy) NSColor *tintColor;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)makeSelectionView;

@end
