@class NSColor, NSFont;

@interface PXWidgetBarSpec : NSObject <NSCopying>

@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSFont *primaryFont;
@property (retain, nonatomic) NSFont *secondaryFont;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL shouldUseSingleLine;
@property (nonatomic) double distanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenLastBaselineAndBottom;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstAscender;
@property (nonatomic) double minimumDistanceBetweenLastDescenderAndBottom;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
