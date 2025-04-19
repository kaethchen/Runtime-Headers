@class SVXSessionUtils, SVXNSLocaleFactory;

@interface SVXSpeechSynthesisUtils : NSObject {
    SVXNSLocaleFactory *_localeFactory;
    SVXSessionUtils *_sessionUtils;
}

- (id)init;
- (void).cxx_destruct;
- (id)createAudioFromUIAudioData:(id)a0;
- (id)createLocaleFromLanguageCode:(id)a0;
- (id)createPhaticPrompt;
- (long long)getGenderFromVoiceGender:(long long)a0;
- (id)getLocaleWithAllowsFallback:(BOOL)a0 preferences:(id)a1;
- (id)getOutputVoiceInfoWithAllowsFallback:(BOOL)a0 preferences:(id)a1;
- (id)initWithLocaleFactory:(id)a0 sessionUtils:(id)a1;
- (BOOL)requestHasSpeakableContents:(id)a0;

@end
