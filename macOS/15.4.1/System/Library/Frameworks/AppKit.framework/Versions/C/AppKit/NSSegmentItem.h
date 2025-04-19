@class NSImage, NSString, NSMenu;

@interface NSSegmentItem : NSObject <NSCopying, NSCoding> {
    double _fullWidth;
    double _shrinkage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _labelRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _menuIndRect;
    long long _toolTipTag;
    NSImage *_alternateImage;
    NSImage *_image;
    NSString *_label;
    NSMenu *_menu;
    long long _tag;
    NSString *_toolTip;
    double _width;
    struct { unsigned char needsRecalc : 1; } _flags;
}

@property double width;
@property long long index;
@property BOOL highlighted;
@property BOOL selected;
@property BOOL disabled;
@property BOOL showsMenuIndicator;
@property BOOL mouseInside;
@property BOOL rollover;
@property BOOL inactiveStateDisablesRollovers;
@property BOOL showsBadge;
@property BOOL animating;
@property long long badgeValue;
@property long long highlightState;
@property unsigned long long imageScaling;
@property long long springLoadingHighlight;
@property long long textAlignment;
@property (retain) NSImage *image;
@property (retain) NSImage *alternateImage;
@property (retain) NSImage *imageToDraw;
@property (copy) NSString *label;
@property (retain) NSMenu *menu;
@property (copy) NSString *toolTip;
@property long long toolTipTag;
@property long long tag;
@property (copy) NSString *accessibilityLabel;
@property (copy) NSString *accessibilityIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
