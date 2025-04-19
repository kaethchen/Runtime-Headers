@protocol WBSDictionaryKeyValueStore;

@interface WBSForYouDataSourceWeightManager : NSObject {
    id<WBSDictionaryKeyValueStore> _store;
}

- (void).cxx_destruct;
- (void)clear;
- (double)weightForSource:(unsigned long long)a0;
- (id)initWithKeyValueStore:(id)a0;
- (void)downvoteSource:(unsigned long long)a0;

@end
