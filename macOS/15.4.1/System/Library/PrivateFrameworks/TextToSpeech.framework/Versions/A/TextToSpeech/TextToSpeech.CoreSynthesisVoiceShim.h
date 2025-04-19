@class NSString, _TtC12TextToSpeech22CoreSynthesisVoiceShim, NSArray, AVSpeechSynthesisVoice;

@interface TextToSpeech.CoreSynthesisVoiceShim : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalResolver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publicResolver;
}

@property (class, nonatomic, retain) _TtC12TextToSpeech22CoreSynthesisVoiceShim *shared;

- (id)init;
- (void).cxx_destruct;
- (void)internalVoiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;
- (void)internalVoicesIncludingSiri:(BOOL)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)publicVoicesWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)voiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;
- (void)voiceWithLanguageCode:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;

@end
