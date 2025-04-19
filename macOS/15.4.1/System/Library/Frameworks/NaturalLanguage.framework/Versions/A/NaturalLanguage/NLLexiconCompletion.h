@interface NLLexiconCompletion : NSObject {
    unsigned int _tokenID;
    double _score;
}

- (id)description;
- (double)score;
- (unsigned int)tokenID;
- (id)initWithTokenID:(unsigned int)a0 score:(double)a1;

@end
