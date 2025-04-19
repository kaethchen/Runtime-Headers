@interface NotesEditor.RecordingViewModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _recordingState;
    void /* unknown type, empty encoding */ _isPlaying;
    void /* unknown type, empty encoding */ _playbackTime;
    void /* unknown type, empty encoding */ _lastPlaybackTime;
    void /* unknown type, empty encoding */ _needsSeekToTime;
    void /* unknown type, empty encoding */ _recordingDurationWhenResumed;
    void /* unknown type, empty encoding */ _showTranscriptToggle;
    void /* unknown type, empty encoding */ _transcriptViewed;
    void /* unknown type, empty encoding */ _transcriptInteractionTargets;
    void /* unknown type, empty encoding */ _transcriptInteractionActionTypes;
    void /* unknown type, empty encoding */ attachmentModel;
    void /* unknown type, empty encoding */ generator;
    void /* unknown type, empty encoding */ _recordingManager;
    void /* unknown type, empty encoding */ audioController;
    void /* unknown type, empty encoding */ _observers;
    void /* unknown type, empty encoding */ _canBePlayedBack;
    void /* unknown type, empty encoding */ _isCallRecording;
    void /* unknown type, empty encoding */ liveTranscriptionCoordinator;
    void /* unknown type, empty encoding */ summaryViewModel;
    void /* unknown type, empty encoding */ _shouldShowTextViewOnFreshLaunch;
    void /* unknown type, empty encoding */ networkMonitor;
    void /* unknown type, empty encoding */ _transcriptionModelState;
    void /* unknown type, empty encoding */ _lastKnownAssetDuration;
    void /* unknown type, empty encoding */ _microphoneState;
    void /* unknown type, empty encoding */ _accessibilityScrubMode;
    void /* unknown type, empty encoding */ transcriptTarget;
    void /* unknown type, empty encoding */ unknownTarget;
    void /* unknown type, empty encoding */ fullInsertToNoteActionType;
    void /* unknown type, empty encoding */ partialInsertToNoteActionType;
    void /* unknown type, empty encoding */ copyActionType;
    void /* unknown type, empty encoding */ unknownActionType;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)audioControllerPlaybackStateChanged:(id)a0;
- (void)handleBackgroundTranscriptionFinished:(id)a0;
- (void)handleBackgroundTranscriptionStarted:(id)a0;
- (void)handleDownloadFinishedNotification:(id)a0;
- (void)handleDownloadStartedNotification:(id)a0;
- (void)handleTimeNotificationWithNotification:(id)a0;

@end
