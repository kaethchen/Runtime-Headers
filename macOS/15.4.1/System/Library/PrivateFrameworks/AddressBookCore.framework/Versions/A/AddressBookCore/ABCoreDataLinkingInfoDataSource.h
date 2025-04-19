@class NSString, ABManagedObjectContext;

@interface ABCoreDataLinkingInfoDataSource : NSObject <ABLinkingInfoDataSource> {
    ABManagedObjectContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_nameBasedIndexingKeyForPerson:(id)a0;
- (id)insertedRecords;
- (id)linkIdentifiersOfDeletedRecords;
- (id)_nameBasedIndexingKeyForCompany:(id)a0;
- (void)_performWithUnscopedAdapter:(id /* block */)a0;
- (id)allRecords;
- (id)linkIdentifierForRecord:(id)a0;
- (void)linkInsertedRecords:(id)a0;
- (void)linkRecord:(id)a0 toRecord:(id)a1;
- (id)nameBasedIndexingKeyForRecord:(id)a0;
- (id)nameCollisionMapForExistingRecords;
- (id)nameCollisionMapForRecords:(id)a0;
- (id)nameForRecord:(id)a0;
- (BOOL)personIsMe:(id)a0;
- (BOOL)property:(id)a0 hasChangedOnRecord:(id)a1;
- (BOOL)recordIsOnlyRecordInLink:(id)a0;
- (BOOL)recordSupportsLinking:(id)a0;
- (id /* block */)recordToAccountURITransform;
- (id /* block */)recordToUniqueIdTransform;
- (id)recordsForIdentifiers:(id)a0;
- (id)recordsForUniqueIds:(id)a0;
- (id)recordsWithLinkIdentifier:(id)a0;
- (void)setLinkId:(id)a0 forRecord:(id)a1;
- (void)setRecordPreferredForName:(id)a0;
- (void)setRecordPreferredForName:(id)a0 linkedRecords:(id)a1;
- (void)setRecordPreferredForPhoto:(id)a0;
- (void)setRecordPreferredForPhoto:(id)a0 linkedRecords:(id)a1;
- (id)uniqueIdForRecord:(id)a0;
- (void)unlinkRecord:(id)a0;
- (id)updatedRecords;

@end
