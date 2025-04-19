@class PLDisambiguation, NSArray;

@interface PSIDisambiguationIntermediateResult : NSObject

@property (readonly, nonatomic) PLDisambiguation *disambiguation;
@property (readonly, nonatomic) NSArray *exactMatchResults;
@property (readonly, nonatomic) NSArray *fullTokenMatchResults;
@property (readonly, nonatomic) NSArray *wildcardMatchResults;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDisambiguation:(id)a0 exactMatchResults:(id)a1 fullTokenMatchResults:(id)a2 wildcardMatchResults:(id)a3;

@end
