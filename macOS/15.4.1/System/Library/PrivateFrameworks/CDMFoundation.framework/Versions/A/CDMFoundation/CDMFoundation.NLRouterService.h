@interface CDMFoundation.NLRouterService : NSObject {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ stringRenderedPromptSanitizer;
    void /* unknown type, empty encoding */ stringResponseSanitizer;
    void /* unknown type, empty encoding */ cacheManager;
    void /* unknown type, empty encoding */ promptGenerator;
    void /* unknown type, empty encoding */ tokenizer;
    void /* unknown type, empty encoding */ generativeAssistantHelper;
    void /* unknown type, empty encoding */ nlRouterClientInstrumentationUtil;
    void /* unknown type, empty encoding */ heuristicAgentKeywordsAssets;
}

+ (BOOL)isEnabled;

- (id)init;
- (void).cxx_destruct;

@end
