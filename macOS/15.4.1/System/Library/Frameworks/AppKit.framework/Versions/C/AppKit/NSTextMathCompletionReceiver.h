@class TUIKeyboardCandidateMultiplexer, _NSTextCompletionContext;

@interface NSTextMathCompletionReceiver : NSObject

@property (retain, nonatomic) TUIKeyboardCandidateMultiplexer *multiplexer;
@property (retain, nonatomic) _NSTextCompletionContext *mathContext;
@property BOOL isCurrentInputMethodCJK;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_buildCandidateWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1 replacementString:(id)a2 replacedString:(id)a3;
- (id)_createKeyboardStateWithString:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)checkCurrentInputMethodForCJK;
- (id)getCurrentInputMethodID;
- (void)handleGenerationResponse:(id)a0 requestToken:(id)a1;
- (id)initWithMultiplexer:(id)a0;
- (void)observeInputMethodForCJK;
- (void)requestCompletionsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1 inString:(id)a2 sequenceNumber:(long long)a3 checkingTypes:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)updateIsCJK;

@end
