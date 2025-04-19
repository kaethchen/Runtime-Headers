@class CNAutocompleteResultFactory, CLSDataStore, NSMutableArray;

@interface CNAClassKitResultTransformVisitor : NSObject {
    NSMutableArray *_results;
}

@property (readonly, nonatomic) CNAutocompleteResultFactory *factory;
@property (readonly, nonatomic) CLSDataStore *dataStore;
@property (readonly, nonatomic) unsigned long long searchType;
@property (readonly, nonatomic) long long groupResultStyle;

+ (id)addressForPerson:(id)a0 searchType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0 dataStore:(id)a1 searchType:(unsigned long long)a2 addressableGroupResultStyle:(long long)a3;
- (id)reduceCollection:(id)a0;
- (void)visitAddressableGroup:(id)a0;
- (void)visitClass:(id)a0;
- (void)visitExpandableGroup:(id)a0;
- (void)visitGroup:(id)a0;
- (void)visitPerson:(id)a0;

@end
