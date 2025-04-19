@class NSString, NSLocale;

@interface TextComposer.TCTextCompositionPrompt : NSObject {
    void /* unknown type, empty encoding */ systemPrompt;
    void /* unknown type, empty encoding */ userPayload;
    void /* unknown type, empty encoding */ fullPrompt;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ sanitizationList;
    void /* unknown type, empty encoding */ needsAdditionalLanguageIdentification;
}

@property (nonatomic, copy) NSString *systemPrompt;
@property (nonatomic, copy) NSString *userPayload;
@property (nonatomic, copy) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFullPrompt:(id)a0 preferredLanguage:(id)a1;
- (id)initWithFullPrompt:(id)a0 preferredLanguage:(id)a1 sanitizationList:(id)a2;
- (id)initWithSystemPrompt:(id)a0 userPayload:(id)a1 preferredLanguage:(id)a2;
- (id)initWithSystemPrompt:(id)a0 userPayload:(id)a1 preferredLanguage:(id)a2 sanitizationList:(id)a3;
- (id)initWithSystemPrompt:(id)a0 userPayload:(id)a1 preferredLanguage:(id)a2 sanitizationList:(id)a3 needsAdditionalLanguageIdentification:(BOOL)a4;
- (id)promptStringAndReturnError:(id *)a0;

@end
