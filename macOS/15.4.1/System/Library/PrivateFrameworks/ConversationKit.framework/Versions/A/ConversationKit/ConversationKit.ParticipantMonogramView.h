@interface ConversationKit.ParticipantMonogramView : NSView {
    void /* unknown type, empty encoding */ colorStyle;
    void /* unknown type, empty encoding */ contactView;
    void /* unknown type, empty encoding */ glowClippingView;
    void /* unknown type, empty encoding */ glowView;
    void /* unknown type, empty encoding */ audioVisualizationView;
    void /* unknown type, empty encoding */ isInRoster;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ participantMonogramViewLayout;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ ringButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabelContainer;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabelContainer;
@property (nonatomic, readonly) BOOL flipped;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)didTapRingButton;

@end
