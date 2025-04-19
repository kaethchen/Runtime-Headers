@class NSString;

@interface HKListUserDomainConcept : HKUserDomainConcept <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long listType;
@property (readonly, copy, nonatomic) NSString *listName;

+ (id)_typeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (id)semanticIdentifier;
- (id)listByAddingUserDomainConcepts:(id)a0;
- (id)_currentLinkCollection;
- (id)_dataDescription;
- (void)_setListName:(id)a0;
- (void)_setListType:(unsigned long long)a0;
- (BOOL)canRequestSyncUponInsertion;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (id)initWithListType:(unsigned long long)a0;
- (id)initWithListType:(unsigned long long)a0 listName:(id)a1;
- (id)listByAddingUserDomainConcept:(id)a0;
- (id)listByExchangingConceptAtIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (id)listByInsertingUserDomainConcept:(id)a0 atIndex:(unsigned long long)a1;
- (id)listByMovingUserDomainConceptFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)listByRemovingAllUserDomainConcepts;
- (id)listByRemovingUserDomainConcept:(id)a0;
- (id)listByRemovingUserDomainConceptAtIndex:(unsigned long long)a0;
- (id)listByReplacingConceptAtIndex:(unsigned long long)a0 withUserDomainConcept:(id)a1;
- (id)listByUpdatingName:(id)a0;
- (BOOL)unitTesting_isIdentical:(id)a0;
- (BOOL)unitTesting_isIdentical:(id)a0 ignoreModificationTimestamp:(BOOL)a1;

@end
