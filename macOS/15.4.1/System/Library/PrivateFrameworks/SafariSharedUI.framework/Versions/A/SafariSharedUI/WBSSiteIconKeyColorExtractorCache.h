@class NSColor;

@interface WBSSiteIconKeyColorExtractorCache : NSObject

@property (retain, nonatomic) NSColor *color;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double confidence;
@property (nonatomic) double nonTransparentConfidence;

- (void).cxx_destruct;

@end
