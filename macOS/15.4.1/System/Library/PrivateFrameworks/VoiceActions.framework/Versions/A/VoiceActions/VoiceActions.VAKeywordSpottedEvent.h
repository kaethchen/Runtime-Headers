@interface VoiceActions.VAKeywordSpottedEvent : NSObject {
    void /* unknown type, empty encoding */ keyword;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ hostTime;
    void /* unknown type, empty encoding */ intervalFromEndOfSpeech;
    void /* unknown type, empty encoding */ silenceBefore;
    void /* unknown type, empty encoding */ silenceAfter;
    void /* unknown type, empty encoding */ speechDuring;
    void /* unknown type, empty encoding */ audioBytes;
}

- (id)init;
- (void).cxx_destruct;

@end
