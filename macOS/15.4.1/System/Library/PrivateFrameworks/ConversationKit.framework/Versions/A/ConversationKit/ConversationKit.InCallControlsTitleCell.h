@interface ConversationKit.InCallControlsTitleCell : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ summaryLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ videoHeaderIcon;
    void /* unknown type, empty encoding */ joinCountdownButton;
    void /* unknown type, empty encoding */ messagesButton;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didPressJoinCountdownButton;
- (void)didTapMessagesButton;

@end
