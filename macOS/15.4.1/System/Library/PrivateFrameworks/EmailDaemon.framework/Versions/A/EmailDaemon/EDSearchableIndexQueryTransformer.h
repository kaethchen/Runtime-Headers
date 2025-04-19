@class NSString, EDSearchableIndexManager;

@interface EDSearchableIndexQueryTransformer : NSObject <EDLocalSearchProvider>

@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformSearchableIndexPredicate:(id)a0 suggestion:(id)a1 searchableIndexManager:(id)a2;

- (void).cxx_destruct;
- (id)initWithSearchableIndexManager:(id)a0;
- (id)persistenceQueryForSearchableIndexQuery:(id)a0;

@end
