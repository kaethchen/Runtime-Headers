@interface ConversationKit.InCallControlsAuthorizedParticipantCell : ConversationKit.InCallControlsParticipantCell {
    void /* unknown type, empty encoding */ infoButton;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ kickMemberButton;
    void /* unknown type, empty encoding */ actionButtonStackView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ callActionDelegate;
    void /* unknown type, empty encoding */ callContactInfoDelegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapActionButton;
- (void)didTapInfo;

@end
