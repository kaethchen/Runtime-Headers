@class NSArray, EDIndexedItems, NSString;

@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) EDIndexedItems *indexedItems;
@property (readonly, nonatomic) NSArray *removedIdentifiers;
@property (readonly, nonatomic) NSArray *removedDomainIdentifiers;
@property (readonly, nonatomic) BOOL hasUpdates;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIndexedItems:(id)a0;
- (id)initWithIndexedItems:(id)a0 removedIdentifiers:(id)a1 removedDomainIdentifiers:(id)a2;
- (id)initWithRemovedDomainIdentifiers:(id)a0;
- (id)initWithRemovedIdentifiers:(id)a0;

@end
