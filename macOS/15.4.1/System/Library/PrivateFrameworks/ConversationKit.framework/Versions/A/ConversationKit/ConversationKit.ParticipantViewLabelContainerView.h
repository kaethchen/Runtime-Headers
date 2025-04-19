@interface ConversationKit.ParticipantViewLabelContainerView : NSView {
    void /* unknown type, empty encoding */ centerAlignedConstraints;
    void /* unknown type, empty encoding */ leadingAlignedConstraints;
    void /* unknown type, empty encoding */ isCentered;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ label;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;

@end
