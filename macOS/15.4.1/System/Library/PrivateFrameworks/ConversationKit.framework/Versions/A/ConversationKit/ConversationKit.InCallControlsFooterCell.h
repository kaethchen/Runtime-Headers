@interface ConversationKit.InCallControlsFooterCell : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ footerStackView;
    void /* unknown type, empty encoding */ addParticipantContainer;
    void /* unknown type, empty encoding */ addPersonButton;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ shareLinkButton;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toggleCaptionsButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_silenceJoinRequestsButton;
    void /* unknown type, empty encoding */ addParticipantEnabled;
    void /* unknown type, empty encoding */ shareLinkEnabled;
    void /* unknown type, empty encoding */ liveCaptionsEnabled;
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleSilenceJoinRequestsTapped;
- (void)handleAddParticipantTapped;
- (void)handleShareLinkTapped;
- (void)handleToggleCaptionsTapped;

@end
