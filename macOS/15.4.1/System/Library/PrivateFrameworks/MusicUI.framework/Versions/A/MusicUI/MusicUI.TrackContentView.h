@interface MusicUI.TrackContentView : NSView {
    void /* unknown type, empty encoding */ trackArtworkView;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ isFavorited;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ shouldUseGroupedSectionBackgroundColor;
    void /* unknown type, empty encoding */ isSectionGrouped;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ buttonActionHandler;
    void /* unknown type, empty encoding */ activeContainerWidth;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ itemIndexPath;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ defaultBackgroundColor;
    void /* unknown type, empty encoding */ trackLockup;
}

@property (nonatomic, readonly) BOOL mouseDownCanMoveWindow;
@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
