@class NSUUID, NSOrderedSet, NSArray, NSString;
@protocol _NSDataSourceSnapshotTranslating;

@interface _NSDiffableDataSourceState : NSObject <_NSDiffableDataSourceQuerying, NSCopying> {
    NSUUID *_generationID;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    id<_NSDataSourceSnapshotTranslating> _dataSourceSnapshot;
}

@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) id<_NSDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)indexForSectionIdentifier:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3;
- (id)initWithState:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
