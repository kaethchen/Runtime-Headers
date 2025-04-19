@interface PHUtilityCollection : PHAssetCollection

@property (readonly, nonatomic) unsigned short type;

+ (id)fetchUtilityCollectionsForReferences:(id)a0 photoLibrary:(id)a1;
+ (id)searchLookupIdentifierForUtilityCollectionType:(unsigned short)a0;

- (id)description;
- (id)localizedTitle;
- (id)objectReference;
- (id)initWithType:(unsigned short)a0 fetchOptions:(id)a1;

@end
