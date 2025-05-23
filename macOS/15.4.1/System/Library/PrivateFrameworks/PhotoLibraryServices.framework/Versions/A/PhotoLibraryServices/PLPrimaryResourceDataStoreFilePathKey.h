@class NSString;

@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey

@property (nonatomic) struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 { unsigned char strategy : 8; unsigned char version : 2; unsigned char relation : 3; } keyStruct;
@property (copy, nonatomic) NSString *filePathSuffix;

+ (id)fileURLForPayloadKeyData:(unsigned long long)a0 assetID:(id)a1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;

- (void).cxx_destruct;
- (id)extension;
- (id)keyData;
- (id)uniformTypeIdentifier;
- (id)fileURLForAssetID:(id)a0;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)descriptionForAssetID:(id)a0;
- (id)initFromExistingLocationOfExternalResource:(id)a0 asset:(id)a1;
- (id)initWithFilePath:(id)a0 andLibraryID:(id)a1;
- (id)initWithKeyStruct:(const void *)a0;

@end
