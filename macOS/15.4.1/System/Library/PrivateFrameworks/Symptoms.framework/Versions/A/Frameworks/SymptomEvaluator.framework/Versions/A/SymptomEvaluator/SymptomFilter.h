@class NSMutableDictionary, Filter;

@interface SymptomFilter : NSObject

@property (nonatomic) unsigned int targetSymptomId;
@property (readonly, nonatomic) NSMutableDictionary *potentialFilters;
@property (retain, nonatomic) Filter *currentFilter;
@property (retain, nonatomic) Filter *finalFilter;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)configureItem:(id)a0;

@end
