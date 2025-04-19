@class NSShadow, VUITextLayout, NSArray, VUITextBadgeLayout, NSString, NSColor;

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextBadgeLayout *liveTextBadgeLayout;
@property (retain, nonatomic) VUITextBadgeLayout *timeTextBadgeLayout;
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout;
@property (readonly, nonatomic) VUITextLayout *immersiveTextLayout;
@property (readonly, nonatomic) VUITextLayout *highMotionTextLayout;
@property (nonatomic) struct CGSize { double width; double height; } entitlementCueImageSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) NSArray *groupedKeys;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } groupMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } commonSenseMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } tomatoMeterMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } immersiveMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } highMotionMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } entitlementCueMargin;
@property (retain, nonatomic) NSString *compositingFilter;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) BOOL useAlignmentRectInset;
@property (nonatomic) BOOL centerAlign;
@property (readonly, nonatomic, getter=isWrappingAllowed) BOOL wrappingAllowed;
@property (readonly, nonatomic) BOOL adjustGenresToFit;
@property (nonatomic) BOOL alignBadgeVertically;
@property (nonatomic) double badgeMaxHeight;
@property (nonatomic) unsigned long long badgeMaxContentSizeCategory;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } badgeMargin;
@property (retain, nonatomic) NSColor *badgeTintColor;
@property (retain, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) NSColor *highContrastBadgeTintColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } textBadgeMargin;
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)updateHighMotionFontSize;

@end
