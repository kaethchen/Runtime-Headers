@interface ConversationKit.ParticipantVideoCameraView : NSView {
    void /* unknown type, empty encoding */ _videoLayer;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
