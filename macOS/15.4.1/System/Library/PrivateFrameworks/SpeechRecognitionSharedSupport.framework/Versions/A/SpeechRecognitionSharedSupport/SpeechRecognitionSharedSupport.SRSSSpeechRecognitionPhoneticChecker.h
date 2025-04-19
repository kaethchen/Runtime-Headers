@interface SpeechRecognitionSharedSupport.SRSSSpeechRecognitionPhoneticChecker : NSObject <SRSSPhoneticCheckerProtocol> {
    void /* unknown type, empty encoding */ phoneticEmbedder;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)guessesForString:(id)a0 maxResults:(long long)a1;
- (id)guessesForString:(id)a0 maxResults:(long long)a1 phoneticWeight:(double)a2 priorWeight:(double)a3;

@end
