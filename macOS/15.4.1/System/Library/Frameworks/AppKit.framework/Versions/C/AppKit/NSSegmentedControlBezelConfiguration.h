@class NSUserInterfaceCompressionOptions, NSAppearance, NSFont, NSColor;

@interface NSSegmentedControlBezelConfiguration : NSObject <NSCopying>

@property (retain) NSAppearance *appearance;
@property (retain) NSColor *selectedSegmentBezelColor;
@property (retain) NSUserInterfaceCompressionOptions *compressibleOptions;
@property (retain) NSFont *font;
@property long long segmentStyle;
@property long long segmentDistribution;
@property long long layoutDirection;
@property unsigned long long controlSize;
@property long long presentationState;
@property long long highlightedSegment;
@property BOOL drawsBezel;
@property BOOL isEnabled;
@property BOOL isHighlighted;
@property BOOL inToolbar;
@property BOOL inTouchBar;
@property BOOL useSlidingStyle;
@property BOOL useTextStyle;
@property BOOL hasAnyRollover;
@property BOOL allowsRollover;
@property BOOL wantsGroupRollover;
@property BOOL animateChanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
