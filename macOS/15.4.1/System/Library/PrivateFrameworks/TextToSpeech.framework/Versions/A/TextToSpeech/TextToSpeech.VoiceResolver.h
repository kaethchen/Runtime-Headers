@class TTSSpeechVoice, _TtC12TextToSpeech13VoiceResolver, NSSet, NSString, NSLocale;

@interface TextToSpeech.VoiceResolver : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ voiceSource;
    void /* unknown type, empty encoding */ requiredTraits;
    void /* unknown type, empty encoding */ forbiddenTraits;
    void /* unknown type, empty encoding */ sortMode;
    void /* unknown type, empty encoding */ cachedVoiceIds;
    void /* unknown type, empty encoding */ cachedLocales;
    void /* unknown type, empty encoding */ cachedPrimaryLocales;
    void /* unknown type, empty encoding */ cachedSystemLocale;
    void /* unknown type, empty encoding */ voices;
    void /* unknown type, empty encoding */ voiceResolutionCache;
}

@property (class, nonatomic, retain) _TtC12TextToSpeech13VoiceResolver *shared;

- (id)init;
- (void)currentLocaleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)currentLocalesWithCompletionHandler:(void (^)(NSSet *))a0;
- (void)currentSystemLocaleIdentifierWithCompletionHandler:(void (^)(NSString *))a0;
- (void)currentSystemLocaleWithCompletionHandler:(void (^)(NSLocale *))a0;
- (void)fallbackForVoice:(TTSSpeechVoice *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (void)voiceForIdentifier:(NSString *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (void)voiceForIdentifier:(id)a0 preferringLanguage:(id)a1 completionHandler:(id /* block */)a2;
- (void)voiceForLocale:(NSLocale *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (void)voiceForLocaleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
