@class NSLocale;

@interface SEMTokenizer : NSObject {
    NSLocale *_locale;
}

@property (readonly, nonatomic) struct shared_ptr<semskitbridge::Tokenizer> { struct Tokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (id)queryFromText:(id)a0;
- (void)enumerateTokensOfText:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithTokenizerLocale:(id)a0 error:(id *)a1;
- (id)initWithLocale:(id)a0 assetPath:(id)a1 normalizeWords:(BOOL)a2;

@end
