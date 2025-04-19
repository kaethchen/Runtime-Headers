@class TUIKeyboardCandidateMultiplexer, NSTextSmartReplyReceiver, NSTextMathCompletionReceiver;

@interface NSTextGenerationReceiver : NSObject <TUIKeyboardCandidateReceiver>

@property (retain, nonatomic) TUIKeyboardCandidateMultiplexer *multiplexer;
@property (retain, nonatomic) NSTextSmartReplyReceiver *smartReplyReceiver;
@property (retain, nonatomic) NSTextMathCompletionReceiver *mathCompletionReceiver;
@property (nonatomic) BOOL isSmartReplyEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isSmartReplyEnabledInDefaults:(id)a0;
- (void)processTextInputContext:(id)a0;
- (void)pushAutocorrections:(id)a0 requestToken:(id)a1;
- (void)requestCompletionsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1 inString:(id)a2 sequenceNumber:(long long)a3 checkingTypes:(unsigned long long)a4 completionHandler:(id /* block */)a5;

@end
