@interface MusicUI.ExpandableTextMoreModalView : MusicUI.ModalView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyTextFieldSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerTextFieldSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deltaVBetweenSubtitleAndScrollView;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ precalculatedLayout;
    void /* unknown type, empty encoding */ lastValidatedBounds;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ titleTextField;
    void /* unknown type, empty encoding */ subtitleTextField;
    void /* unknown type, empty encoding */ bodyTextField;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ gradientFadeView;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (BOOL)isFlipped;

@end
