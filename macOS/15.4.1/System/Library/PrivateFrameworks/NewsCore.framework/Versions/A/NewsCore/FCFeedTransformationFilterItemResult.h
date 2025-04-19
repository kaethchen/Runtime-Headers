@interface FCFeedTransformationFilterItemResult : NSObject

@property (readonly, nonatomic) id item;
@property (nonatomic, getter=isFiltered) BOOL filtered;
@property (nonatomic) unsigned long long filteredReasons;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 filtered:(BOOL)a1 filteredReasons:(unsigned long long)a2;

@end
