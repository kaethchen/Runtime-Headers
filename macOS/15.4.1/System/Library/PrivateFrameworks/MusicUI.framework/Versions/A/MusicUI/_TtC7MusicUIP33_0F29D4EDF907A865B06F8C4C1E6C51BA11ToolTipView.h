@interface _TtC7MusicUIP33_0F29D4EDF907A865B06F8C4C1E6C51BA11ToolTipView : NSView {
    void /* unknown type, empty encoding */ titleFont;
    void /* unknown type, empty encoding */ subtitleFont;
    void /* unknown type, empty encoding */ closeHandler;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ iconImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleTextField;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
