@interface _TtCC6Speech31EARLanguageDetectorResultStream8XPCProxy : NSObject <_SFXPCEARLanguageDetectorResultStream> {
    void /* unknown type, empty encoding */ enqueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)languageDetectorDidFinishWithError:(id)a0;
- (void)languageDetectorDidRecognizeResult:(id)a0 processedAudioDuration:(double)a1;

@end
