@interface NotesUI.AudioRecordingManager : NSObject {
    void /* unknown type, empty encoding */ recordingMethod;
    void /* unknown type, empty encoding */ _recordingState;
    void /* unknown type, empty encoding */ _currentRecordingDuration;
    void /* unknown type, empty encoding */ _totalRecordingDuration;
    void /* unknown type, empty encoding */ _samples;
    void /* unknown type, empty encoding */ _recordingStartTime;
    void /* unknown type, empty encoding */ timeObserver;
    void /* unknown type, empty encoding */ waveformBuffer;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ liveTranscriptionCoordinator;
    void /* unknown type, empty encoding */ attachmentModel;
    void /* unknown type, empty encoding */ appBackgroundOccurred;
    void /* unknown type, empty encoding */ noteMultitaskingOccurred;
}

- (id)init;
- (void).cxx_destruct;
- (void)analyticsSessionWillEnd:(id)a0;

@end
