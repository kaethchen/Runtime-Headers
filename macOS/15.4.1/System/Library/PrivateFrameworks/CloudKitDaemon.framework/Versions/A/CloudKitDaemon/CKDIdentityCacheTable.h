@interface CKDIdentityCacheTable : CKSQLiteCacheTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)objectClassesForProperty:(id)a0;
- (id)cachedIdentityForLookupInfo:(id)a0 container:(id)a1;
- (void)deleteUserIdentityForLookupInfo:(id)a0 container:(id)a1;
- (id)insertUserIdentity:(id)a0 forLookupInfo:(id)a1 container:(id)a2;
- (id)predicateForMatchingLookupInfoInContainer;
- (id)valuesDictionaryForLookupInfo:(id)a0 container:(id)a1;

@end
