@interface SiriGestureBridge.GestureController : NSObject <HGHeadGesturesDelegateInternal, AFNotifyObserverDelegate> {
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ headGestureQueue;
    void /* unknown type, empty encoding */ sessionState;
    void /* unknown type, empty encoding */ announcementState;
    void /* unknown type, empty encoding */ gestureMapping;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ siriObserver;
    void /* unknown type, empty encoding */ headGestureDeduper;
    void /* unknown type, empty encoding */ userIntent;
    void /* unknown type, empty encoding */ isReady;
    void /* unknown type, empty encoding */ recognizing;
    void /* unknown type, empty encoding */ ttsActive;
    void /* unknown type, empty encoding */ audioSessionConfigured;
    void /* unknown type, empty encoding */ waitingForTTS;
    void /* unknown type, empty encoding */ requestActive;
    void /* unknown type, empty encoding */ sessionActive;
    void /* unknown type, empty encoding */ isListening;
    void /* unknown type, empty encoding */ hgManager;
    void /* unknown type, empty encoding */ lastPromptInfo;
    void /* unknown type, empty encoding */ promptedForConfirmation;
    void /* unknown type, empty encoding */ siriObserverQueue;
    void /* unknown type, empty encoding */ readingAnnouncement;
    void /* unknown type, empty encoding */ announcingIncomingCall;
    void /* unknown type, empty encoding */ expectingSiriXConfirmation;
    void /* unknown type, empty encoding */ expectingSiriClassicConfirmation;
    void /* unknown type, empty encoding */ expectingSiriPommesConfirmation;
    void /* unknown type, empty encoding */ expectingSiriIEConfirmation;
    void /* unknown type, empty encoding */ lastActionEventId;
    void /* unknown type, empty encoding */ useOwnAudioSession;
    void /* unknown type, empty encoding */ internalTesting;
    void /* unknown type, empty encoding */ pendingHeadGestureResult;
}

- (id)init;
- (void).cxx_destruct;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)didDetectedError;
- (void)didDetectedWithHeadGesture:(id)a0;
- (void)didStartStreamingWithIsStreaming:(BOOL)a0;

@end
