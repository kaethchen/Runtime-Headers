@class SEMTokenizer;

@interface KVTokenizer : NSObject

@property (readonly, nonatomic) SEMTokenizer *tokenizer;

- (void).cxx_destruct;
- (id)locale;
- (id)initWithLocale:(id)a0;
- (id)queryFromText:(id)a0;
- (void)enumerateTokensOfText:(id)a0 usingBlock:(id /* block */)a1;

@end
