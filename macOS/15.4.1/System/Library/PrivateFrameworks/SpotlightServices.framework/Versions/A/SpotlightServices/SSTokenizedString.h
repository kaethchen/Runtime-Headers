@class NSString, NSArray;

@interface SSTokenizedString : NSObject {
    BOOL _shouldTokenize;
}

@property (retain) NSString *locale;
@property (retain) NSString *original;
@property (retain) NSArray *tokens;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 locale:(id)a1;
- (BOOL)hasPrefixForMatchInfoToken:(id)a0;
- (id)tokenMatchForMatchInfoToken:(id)a0;
- (id)tokenize;

@end
