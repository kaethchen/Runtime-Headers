@interface ConversationKit.CallControlsView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ containerStackView;
    void /* unknown type, empty encoding */ joinConversationButton;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ endButton;
    void /* unknown type, empty encoding */ toggleAudioButton;
    void /* unknown type, empty encoding */ toggleVideoButton;
    void /* unknown type, empty encoding */ toggleCallControls;
    void /* unknown type, empty encoding */ expandButton;
    void /* unknown type, empty encoding */ screenShareButton;
    void /* unknown type, empty encoding */ localVideoRecordButton;
    void /* unknown type, empty encoding */ shouldHideContact;
    void /* unknown type, empty encoding */ enabled;
    void /* unknown type, empty encoding */ remoteParticipantsSupportScreenSharing;
    void /* unknown type, empty encoding */ mode;
}

@property (nonatomic) void /* unknown type, empty encoding */ isScreenSharing;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)windowStateDidChange:(id)a0;
- (void)didTapCancel;
- (void)didTapAskToScreenShareButton:(id)a0;
- (void)didTapExpand;
- (void)didTapJoinConversation;
- (void)didTapLeaveConversation;
- (void)didTapRecord;
- (void)didTapScreenShareButton;
- (void)didTapStartScreenShareButton;
- (void)didTapToggleMuteAudio;
- (void)didTapToggleSideBar;
- (void)didToggleMuteCamera;
- (void)handleAudioMuteStateChanged:(id)a0;
- (void)handleVideoMuteStateChanged:(id)a0;

@end
