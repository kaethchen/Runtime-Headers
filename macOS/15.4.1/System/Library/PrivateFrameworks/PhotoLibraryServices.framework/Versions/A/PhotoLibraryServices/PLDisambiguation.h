@class NSString, NSIndexSet;

@interface PLDisambiguation : NSObject

@property (readonly, nonatomic) NSString *queryTerm;
@property (readonly, nonatomic) NSIndexSet *indexingCategories;
@property (readonly, nonatomic) unsigned long long disambiguationType;
@property (readonly, nonatomic) unsigned long long maxNumberOfResults;
@property (readonly, nonatomic) unsigned long long matchOptions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryTerm:(id)a0 disambiguationType:(unsigned long long)a1 indexingCategories:(id)a2 maxNumberOfResults:(unsigned long long)a3 matchOptions:(unsigned long long)a4;

@end
