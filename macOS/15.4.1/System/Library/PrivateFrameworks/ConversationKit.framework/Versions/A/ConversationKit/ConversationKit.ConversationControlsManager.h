@interface ConversationKit.ConversationControlsManager : NSObject {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ ignoredScreenSharingRequestUUIDs;
    void /* unknown type, empty encoding */ initiallyActiveParticipantIdentifiers;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ coreAnalyticsReporter;
    void /* unknown type, empty encoding */ noticeCoordinator;
    void /* unknown type, empty encoding */ activeNoticeCancellable;
    void /* unknown type, empty encoding */ contentExtractor;
    void /* unknown type, empty encoding */ shouldShowCallDetailsWhenReady;
    void /* unknown type, empty encoding */ isOnScreenSubscription;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ systemBannerPresenter;
    void /* unknown type, empty encoding */ systemConversationControlsDelegate;
    void /* unknown type, empty encoding */ systemAudioConversationControlsDelegate;
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ inCallDetailsViewControllerDelegate;
    void /* unknown type, empty encoding */ audioRoutingDelegate;
    void /* unknown type, empty encoding */ localAudioTogglingDelegate;
    void /* unknown type, empty encoding */ handoffCompletedDelegate;
    void /* unknown type, empty encoding */ approvalDelegate;
    void /* unknown type, empty encoding */ conduitLagunaNoticeManager;
    void /* unknown type, empty encoding */ lagunaQueue;
    void /* unknown type, empty encoding */ conversationDidChangePublisher;
    void /* unknown type, empty encoding */ _shouldOpenMessages;
    void /* unknown type, empty encoding */ _shouldEnableStartingStagedActivity;
    void /* unknown type, empty encoding */ activityManager;
    void /* unknown type, empty encoding */ bannerActivityManager;
    void /* unknown type, empty encoding */ incomingScreenSharingRequestActivity;
    void /* unknown type, empty encoding */ _audioRoute;
    void /* unknown type, empty encoding */ _bluetoothAudioFormat;
    void /* unknown type, empty encoding */ _localAudioEnabled;
    void /* unknown type, empty encoding */ _localVideoButtonState;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ _foregroundApp;
    void /* unknown type, empty encoding */ postedCollaborationPrompts;
    void /* unknown type, empty encoding */ foregroundCollaborationState;
    void /* unknown type, empty encoding */ collaborationInitiationManager;
    void /* unknown type, empty encoding */ shouldShowDelayedLMIBanner;
    void /* unknown type, empty encoding */ entitlementsChecker;
    void /* unknown type, empty encoding */ isWaitingOnFirstRemoteFrame;
    void /* unknown type, empty encoding */ shouldShowAVLessLeaveConfirmation;
    void /* unknown type, empty encoding */ avLessLeaveConfirmationPresentedDate;
    void /* unknown type, empty encoding */ activityLaunchTimer;
    void /* unknown type, empty encoding */ applicationState;
    void /* unknown type, empty encoding */ _appLaunchButtonType;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ updateForegroundCollaborationStateTask;
    void /* unknown type, empty encoding */ screenShareCountdownTimer;
    void /* unknown type, empty encoding */ participantStateDidChangeSubject;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)acceptScreenShare;
- (void)acceptScreenShareWithDisplayStyle;
- (void)accessibilityDidAddPendingParticipant:(id)a0;
- (void)declineScreenShare;
- (void)handleDidChangeIsWaitingOnFirstRemoteFrame:(id)a0;
- (void)handleIsScreeningChanged:(id)a0;

@end
