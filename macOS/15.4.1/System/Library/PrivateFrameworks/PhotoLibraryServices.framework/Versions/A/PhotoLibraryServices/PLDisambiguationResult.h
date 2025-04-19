@class PLDisambiguation, NSArray;

@interface PLDisambiguationResult : NSObject

@property (readonly, nonatomic) PLDisambiguation *disambiguation;
@property (readonly, nonatomic) NSArray *personLookupIdentifiers;
@property (readonly, nonatomic) NSArray *locationNames;
@property (readonly, nonatomic) NSArray *genericLocationTuples;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDisambiguation:(id)a0 personLookupIdentifiers:(id)a1 locationNames:(id)a2 genericLocationTuples:(id)a3;

@end
