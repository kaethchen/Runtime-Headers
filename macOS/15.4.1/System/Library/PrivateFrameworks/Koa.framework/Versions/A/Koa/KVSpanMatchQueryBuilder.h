@class SEMSpanMatchQueryBuilder;

@interface KVSpanMatchQueryBuilder : NSObject {
    SEMSpanMatchQueryBuilder *_builder;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)build;
- (void)addTokenWithValue:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 beginIndex:(unsigned int)a3 endIndex:(unsigned int)a4 isSignificant:(BOOL)a5 isWitespace:(BOOL)a6;

@end
