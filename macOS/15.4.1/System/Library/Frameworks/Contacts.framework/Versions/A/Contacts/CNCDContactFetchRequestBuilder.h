@class CNContactFetchRequest;

@interface CNCDContactFetchRequestBuilder : NSObject

@property (copy) CNContactFetchRequest *fetchRequest;

+ (long long)defaultSortOrder;

- (void).cxx_destruct;
- (id)sortDescriptors;
- (id)initWithFetchRequest:(id)a0;
- (BOOL)unifyResults;
- (id)buildFetchRequestDescription;
- (id /* block */)contactsByNameComparator;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate:(id)a0;
- (id)relationshipKeyPathsAndPropertyKeysPair;
- (id)relationshipKeyPathsAndPropertyKeysPairForKeyVector:(id)a0;
- (id)validatePredicate:(id)a0 error:(id *)a1;
- (id)validatePredicateWithError:(id *)a0;

@end
