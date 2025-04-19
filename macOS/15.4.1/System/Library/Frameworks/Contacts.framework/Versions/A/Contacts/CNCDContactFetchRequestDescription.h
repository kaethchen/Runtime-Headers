@class NSError, NSArray;
@protocol CNCDContactPredicate;

@interface CNCDContactFetchRequestDescription : NSObject

@property (readonly) id<CNCDContactPredicate> predicate;
@property (readonly, copy) NSError *predicateError;
@property (readonly, copy) NSArray *propertyKeys;
@property (readonly, copy) NSArray *relationshipKeyPaths;
@property (readonly, copy) NSArray *sortDescriptors;
@property (readonly, copy) NSArray *effectiveKeysToFetch;
@property (readonly, copy) id /* block */ contactsByNameComparator;
@property (readonly) BOOL unifyResults;

+ (id)descriptionWithFetchRequest:(id)a0;

- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;
- (id)validatedPredicateWithError:(id *)a0;

@end
