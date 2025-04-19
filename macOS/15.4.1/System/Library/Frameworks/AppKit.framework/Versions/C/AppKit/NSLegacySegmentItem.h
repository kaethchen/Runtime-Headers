@class NSMenu, NSString, NSSegmentedControlAppearanceBasedVisualProvider, NSSegmentItem, NSSegmentedCell, NSSegmentItemView, NSImage, NSImageView;

@interface NSLegacySegmentItem : NSObject <NSCopying> {
    NSSegmentedCell *_owningCell;
    NSSegmentItem *_itemConfiguration;
    NSSegmentedControlAppearanceBasedVisualProvider *_visualProvider;
    struct { unsigned char needsRecalc : 1; } _flags;
    NSImageView *_badgeView;
    struct { unsigned char trackingMode : 3; unsigned char trimmedLabels : 1; unsigned char drawing : 1; unsigned char recalcToolTips : 1; unsigned char usesWindowsStyle : 1; unsigned char dontShowSelectedAndPressedAppearance : 1; unsigned char menuShouldBeUniquedAgainstMain : 1; unsigned char style : 8; unsigned char flatMinX : 1; unsigned char flatMaxX : 1; unsigned char segmentedSeparated : 1; unsigned char animateNextLayout : 1; } _seFlags;
}

@property (copy) NSSegmentItem *itemConfiguration;
@property (readonly) double width;
@property (readonly, getter=_image) NSImage *image;
@property (readonly, getter=_alternateImage) NSImage *alternateImage;
@property (readonly) NSImage *imageToDraw;
@property (readonly, copy, getter=_label) NSString *label;
@property (readonly, getter=_menu) NSMenu *menu;
@property (readonly, copy) NSString *toolTip;
@property (readonly) long long tag;
@property (readonly) long long index;
@property (retain) NSSegmentItemView *segmentItemView;
@property (readonly, getter=_needsRecalc) BOOL needsRecalc;
@property (readonly, getter=_selected) BOOL selected;
@property (readonly, getter=_disabled) BOOL disabled;
@property (readonly, getter=_showMenuIndicator) BOOL showMenuIndicator;
@property (readonly, getter=_mouseInside) BOOL mouseInside;
@property (readonly, getter=_inactiveStateDisablesRollovers) BOOL inactiveStateDisablesRollovers;
@property (readonly, getter=_imageScaling) unsigned long long imageScaling;
@property (readonly) BOOL highlighted;
@property (readonly) long long highlightState;
@property (readonly, getter=_showsBadge) BOOL showsBadge;
@property (readonly, getter=_springLoadingHighlight) long long springLoadingHighlight;
@property (readonly, getter=_badgeEmblem) NSImage *badgeEmblem;
@property (readonly, getter=_displayWidth) double displayWidth;
@property (getter=_fullWidth) double fullWidth;
@property (getter=_shrinkage, setter=_setShrinkage:) double shrinkage;
@property (getter=_imageRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (getter=_labelRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRect;
@property (getter=_menuIndRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuIndRect;
@property long long toolTipTag;
@property (retain, getter=_badgeView, setter=_setBadgeView:) NSImageView *badgeView;
@property (getter=_badgeValue, setter=_setBadgeValue:) long long badgeValue;
@property (readonly) long long textAlignment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsRecalc;
- (void)noteMenuChanged;
- (void)_setOwningCell:(id)a0;
- (id)_badgeEmblemForValue:(long long)a0;
- (void)_clearNeedsRecalc;
- (void)_recalcRectsForCell:(id)a0;
- (void)_setVisualProvider:(id)a0;
- (BOOL)disabled;
- (void)noteAlternateImageChanged;
- (void)noteBadgeValueChanged;
- (void)noteDisabledChanged;
- (void)noteHighlightedChanged;
- (void)noteImageChanged;
- (void)noteImageScalingChanged;
- (void)noteImageToDrawChanged;
- (void)noteInactiveStateDisablesRolloversChanged;
- (void)noteLabelChanged;
- (void)noteRolloverChanged;
- (void)noteSelectedChanged;
- (void)noteShowsBadgeChanged;
- (void)noteShowsMenuIndicatorChanged;
- (void)noteSpringLoadingHighlightChanged;
- (void)noteTextAlignmentChanged;
- (void)noteWidthChanged;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;

@end
