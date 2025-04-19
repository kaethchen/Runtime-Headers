@interface CoreHapticsTools.CHTDocument : NSObject {
    void /* unknown type, empty encoding */ undoRedoManager;
    void /* unknown type, empty encoding */ enableUndoManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ _hapticTransientEvents;
    void /* unknown type, empty encoding */ _hapticContinuousEvents;
    void /* unknown type, empty encoding */ _audioCustomEvents;
    void /* unknown type, empty encoding */ _audioContinuousEvents;
    void /* unknown type, empty encoding */ paramCurves;
    void /* unknown type, empty encoding */ _parsedHapticParameterCount;
    void /* unknown type, empty encoding */ _parsedHapticParameterCurveCount;
    void /* unknown type, empty encoding */ _parsedAudioParameterCount;
    void /* unknown type, empty encoding */ _parsedAudioParameterCurveCount;
    void /* unknown type, empty encoding */ fallbackDuration;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ url;
}

- (id)init;
- (void).cxx_destruct;

@end
