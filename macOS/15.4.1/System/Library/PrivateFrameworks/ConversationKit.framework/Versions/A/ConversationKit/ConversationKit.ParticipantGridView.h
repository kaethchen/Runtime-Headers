@interface ConversationKit.ParticipantGridView : NSView {
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ participantIdentifiableTiles;
    void /* unknown type, empty encoding */ unfocusedParticipantOverlay;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ deviceType;
    void /* unknown type, empty encoding */ organicLayoutConfiguration;
    void /* unknown type, empty encoding */ currentlyFocusedParticipantIdentifier;
    void /* unknown type, empty encoding */ mostProminentParticipantIdentifier;
    void /* unknown type, empty encoding */ fullScreenFocusedParticipantInfo;
    void /* unknown type, empty encoding */ mostRecentAnimationIndex;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentAnimationInfo;
    void /* unknown type, empty encoding */ videoInfoCache;
    void /* unknown type, empty encoding */ cachedFrameSize;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ frozenFrameOverlayState;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
