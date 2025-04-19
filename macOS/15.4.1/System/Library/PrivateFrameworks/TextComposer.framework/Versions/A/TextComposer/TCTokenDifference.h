@class NSArray, NSString;

@interface TCTokenDifference : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } inputTokenRange;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } outputTokenRange;
@property (readonly, copy) NSArray *inputTokens;
@property (readonly, copy) NSArray *outputTokens;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } inputCharacterRange;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } outputCharacterRange;
@property (readonly, copy) NSString *inputText;
@property (readonly, copy) NSString *outputText;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTokens:(id)a1 outputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTokens:(id)a3 inputCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 inInput:(id)a5 outputCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 inOutput:(id)a7;
- (id)initWithInputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inputTokens:(id)a1 outputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 outputTokens:(id)a3 inputCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 inputText:(id)a5 outputCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 outputText:(id)a7;
- (id)initWithManager:(id)a0 inputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 outputTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
