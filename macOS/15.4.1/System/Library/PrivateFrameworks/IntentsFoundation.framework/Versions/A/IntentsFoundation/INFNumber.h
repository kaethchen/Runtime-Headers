@class NSNumber, NSString;

@interface INFNumber : INFSentenceToken {
    NSString *_identifier;
}

@property (copy, nonatomic) NSNumber *value;

+ (id)numberWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (id)contributingSentenceContext;
- (id)stringForContext:(id)a0;

@end
