@interface PHUtilityCollectionReference : PHAssetCollectionReference

@property (readonly, nonatomic) unsigned short utilityCollectionType;

+ (id)representedType;
+ (id)referenceForUtilityCollection:(id)a0;

- (id)_transientCollectionInLibrary:(id)a0;
- (id)dictionaryForReferenceType:(id)a0;
- (id)initWithDictionary:(id)a0 referenceType:(id)a1;
- (id)initWithLocalIdentifier:(id)a0 libraryURL:(id)a1 type:(unsigned short)a2;
- (BOOL)transient;

@end
