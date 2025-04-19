@class NSDictionary;

@interface NSExtendedSpellCheckingResult : NSSpellCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _sentenceRange;
    NSDictionary *_detail;
}

- (void)dealloc;
- (id)detail;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 detail:(id)a2;
- (BOOL)isSentenceCorrectionResult;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sentenceRange;

@end
