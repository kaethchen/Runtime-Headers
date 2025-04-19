@class NSArray;

@interface LXLexiconChecker : NSObject {
    struct unique_ptr<lexicon::LexiconCheckerImpl, std::default_delete<lexicon::LexiconCheckerImpl>> { struct __compressed_pair<lexicon::LexiconCheckerImpl *, std::default_delete<lexicon::LexiconCheckerImpl>> { struct LexiconCheckerImpl *__value_; } __ptr_; } _impl;
}

@property (readonly, copy, nonatomic) NSArray *availableLocales;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)checkValidityOfString:(id)a0 locales:(id)a1 allowlist:(id)a2 error:(id *)a3;

@end
