@interface MediaPlaybackCore.InterruptedState : MediaPlaybackCore.PausedState {
    void /* unknown type, empty encoding */ interruptedState;
    void /* unknown type, empty encoding */ interruptionEvent;
    void /* unknown type, empty encoding */ signalOnEnter;
    void /* unknown type, empty encoding */ timeAtStartOfInterruption;
}

@end
