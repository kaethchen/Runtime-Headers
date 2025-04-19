@class NSString;

@interface NLTokenizer : NSObject {
    long long _unit;
    NSString *_string;
    NSString *_language;
    struct __NLTokenizer { } *_tokenizer;
}

@property (readonly, nonatomic) long long unit;
@property (retain, nonatomic) NSString *string;

- (void)dealloc;
- (void).cxx_destruct;
- (id)language;
- (void)setLanguage:(id)a0;
- (id)tokensForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithUnit:(long long)a0;
- (const struct { struct { long long x0; long long x1; } x0; unsigned long long x1; } *)_tokenAtIndex:(unsigned long long)a0;
- (id)_wordCharacterSet;
- (void)enumerateTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
