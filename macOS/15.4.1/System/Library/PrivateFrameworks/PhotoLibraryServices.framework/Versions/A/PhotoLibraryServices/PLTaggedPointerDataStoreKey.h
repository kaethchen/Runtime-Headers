@class NSString;

@interface PLTaggedPointerDataStoreKey : PLTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey, PLChooserKeyProperties>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyWithKeyStruct:(const void *)a0 keyLength:(unsigned long long)a1 forStoreClassID:(unsigned short)a2 inLibraryWithID:(id)a3;

- (BOOL)isEqual:(id)a0;
- (id)keyData;
- (BOOL)isEqualToKey:(id)a0;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)a0;
- (BOOL)isDerivative;
- (unsigned int)recipeIDForAssetID:(id)a0;
- (BOOL)representsSquareResource;
- (void)tableType:(unsigned int *)a0 index:(int *)a1;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)_heapAllocatedRepresentationInLibraryWithID:(id)a0;
- (id)descriptionForAssetID:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;

@end
