@class NLTagger;

@interface _EARNLTokenizer : _EARTokenizer {
    NLTagger *_nlTagger;
}

@property (nonatomic) BOOL toLowerCase;
@property (nonatomic) BOOL replacePunctuation;
@property (nonatomic) unsigned long long tagOptions;

- (id)init;
- (void).cxx_destruct;
- (id)tokenize:(id)a0 limit:(unsigned long long)a1;
- (id)tokenize:(id)a0;

@end
