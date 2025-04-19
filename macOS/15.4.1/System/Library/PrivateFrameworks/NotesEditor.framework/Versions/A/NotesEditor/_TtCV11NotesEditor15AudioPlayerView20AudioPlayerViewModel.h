@interface _TtCV11NotesEditor15AudioPlayerView20AudioPlayerViewModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _isCallRecording;
    void /* unknown type, empty encoding */ _isFaceTimeAudio;
    void /* unknown type, empty encoding */ attachment;
    void /* unknown type, empty encoding */ _assetDuration;
    void /* unknown type, empty encoding */ _recordingManager;
    void /* unknown type, empty encoding */ _recordingCoordinatorObservation;
    void /* unknown type, empty encoding */ _recordingManagerObservation;
    void /* unknown type, empty encoding */ _didUpdateFromModel;
    void /* unknown type, empty encoding */ _topLineSummary;
    void /* unknown type, empty encoding */ _transcript;
    void /* unknown type, empty encoding */ _attachmentDidLoadObservation;
    void /* unknown type, empty encoding */ _attachmentChangedObservation;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)audioControllerPlayPauseToggled:(id)a0;
- (void)audioControllerStopped:(id)a0;
- (void)audioControllerTimeChanged:(id)a0;
- (void)takeValuesViaNotification;

@end
