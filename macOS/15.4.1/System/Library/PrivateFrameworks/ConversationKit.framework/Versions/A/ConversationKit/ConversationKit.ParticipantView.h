@class _TtC15ConversationKit19ParticipantInfoView;

@interface ConversationKit.ParticipantView : NSView {
    void /* unknown type, empty encoding */ backgroundEffectsView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ alertView;
    void /* unknown type, empty encoding */ videoOverlayView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoView;
    void /* unknown type, empty encoding */ prominenceBorderView;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ mostRecentViewModelHash;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ hideInfoViewTimer;
    void /* unknown type, empty encoding */ hideAlertViewTimer;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ customCornerRadius;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ monogramView;
@property (nonatomic, retain) _TtC15ConversationKit19ParticipantInfoView *infoView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ kickMemberButton;
@property (nonatomic) void /* unknown type, empty encoding */ isInRoster;
@property (nonatomic) void /* unknown type, empty encoding */ shouldOverrideShadowHidden;
@property (nonatomic) void /* unknown type, empty encoding */ isExpanded;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapKickMember;

@end
