@class NSArray, NSString, SEMSandbox, SEMSpanMatcher;

@interface CDMSiriVocabularyProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    SEMSandbox *_semSandbox;
    SEMSpanMatcher *_semSpanMatcher;
}

@property (readonly) NSArray *overrideSpans;
@property (readonly) NSString *userId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertSEMResultToNLUTypesMatchingSpan:(id)a0 tokenChain:(id)a1;
+ (id)convertSEMSpanResults:(id)a0 tokenChain:(id)a1;
+ (void *)getFirstEntitySpanFromGraph:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)callSEMSpanMatcher:(id)a0 asrHypothesis:(id)a1;
- (id)initWithOverrideSpans:(id)a0;
- (id)initWithSEMSpanMatcher:(id)a0;
- (id)initWithSandboxId:(id)a0;
- (id)matchSpansForTokenChain:(id)a0 asrHypothesis:(id)a1;
- (id)semSandboxId;
- (id)semSpanMatcher;

@end
