@interface StickerKit.EmojiScrollView : NSView <NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ emojiDelegate;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ clipView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ allowUserScrolling;
    void /* unknown type, empty encoding */ panGR;
    void /* unknown type, empty encoding */ lastPan;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didEndScrollInScrollView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)didScroll:(id)a0;
- (void)didPan:(id)a0;

@end
