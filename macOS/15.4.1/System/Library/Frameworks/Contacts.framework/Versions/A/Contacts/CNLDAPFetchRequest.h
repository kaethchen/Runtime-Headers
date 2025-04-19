@class NSString, NSArray;

@interface CNLDAPFetchRequest : NSObject

@property (copy) NSString *filter;
@property (copy) NSArray *searchBases;
@property unsigned int fetchLimit;
@property (copy) NSArray *attributesToFetch;
@property unsigned long long resultType;

+ (id)defaultAttributesToFetch;
+ (id)filterWithPredicate:(id)a0 error:(id *)a1;
+ (id)filterWithUserInput:(id)a0;

- (id)copy;
- (id)init;
- (void).cxx_destruct;

@end
