@class NSString, AXCVoiceSelection;

@interface _TtCE22AccessibilityUtilitiesCSo13AXPreferences21SpokenContentSettings : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolver;
    void /* unknown type, empty encoding */ _voiceSelectionsByLanguage;
    void /* unknown type, empty encoding */ _macroLanguageDisambiguations;
}

- (id)init;
- (void).cxx_destruct;
- (void)setForLanguage:(NSString *)a0 voiceSelection:(AXCVoiceSelection *)a1 completionHandler:(void (^)(void))a2;
- (void)setWithVoiceId:(NSString *)a0 forLanguage:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 exists:(BOOL *)a1 completionHandler:(void (^)(NSString *))a2;
- (void)voiceSelectionForLanguage:(NSString *)a0 completionHandler:(void (^)(AXCVoiceSelection *))a1;

@end
