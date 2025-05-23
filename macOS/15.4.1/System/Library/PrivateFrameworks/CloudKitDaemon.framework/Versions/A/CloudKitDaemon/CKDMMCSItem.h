@class NSURL, NSFileHandle, CKPackage, CKAssetDownloadPreauthorization, NSDictionary, CKDMMCSItemCommandWriter, CKDAssetZoneKey, CKAsset, NSMutableArray, NSString, CKRecordID, NSNumber, NSData, NSError;

@interface CKDMMCSItem : NSObject

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSNumber *modTimeInSeconds;
@property unsigned long long itemID;
@property double progress;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long paddedFileSize;
@property (retain, nonatomic) NSData *verificationKey;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int chunkCount;
@property (nonatomic) long long packageIndex;
@property (retain, nonatomic) NSString *putPackageSectionIdentifier;
@property (readonly, nonatomic) CKAsset *asset;
@property (retain, nonatomic) CKPackage *package;
@property (nonatomic) BOOL isPackageManifest;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSString *recordKey;
@property (copy) NSData *signature;
@property (retain, nonatomic) NSString *itemTypeHint;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (retain, nonatomic) NSString *uploadReceipt;
@property (nonatomic) double uploadReceiptExpiration;
@property (retain, nonatomic) NSMutableArray *sectionItems;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *wrappedAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (retain, nonatomic) NSData *boundaryKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (retain, nonatomic) CKDMMCSItemCommandWriter *writer;
@property (nonatomic) BOOL downloadLooksOkay;
@property (nonatomic) unsigned long long uploadTokenExpiration;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (retain, nonatomic) NSDictionary *assetChunkerOptions;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;
@property (readonly, nonatomic) unsigned long long MMCSEncoding;
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL;
@property (nonatomic) unsigned long long constructedAssetEstimatedSize;
@property (retain, nonatomic) NSString *trackingUUID;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasOffset;
@property BOOL finished;
@property (readonly, nonatomic) BOOL isTemporary;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (nonatomic) BOOL shouldReadAssetContentUsingClientProxy;
@property (nonatomic) BOOL usesAssetDownloadStagingManager;
@property (nonatomic) BOOL isAlreadyRegistered;
@property (nonatomic) BOOL isReaderReadFrom;

- (id)description;
- (void).cxx_destruct;
- (id)init:(BOOL)a0;
- (id)openWithError:(id *)a0;
- (id)initWithAsset:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithPackage:(id)a0;
- (BOOL)canBeRegistered;
- (id)getFileSizeWithOperation:(id)a0 error:(id *)a1;
- (id)_openInfo;
- (void)clearFileSize;
- (id)clonedFileURLInDestinationDirectory:(id)a0;
- (id)getFileMetadataWithContainer:(id)a0 fileHandle:(id)a1 error:(id *)a2;
- (id)getFileMetadataWithFileHandle:(id)a0 error:(id *)a1;
- (id)getFileSizeWithError:(id *)a0;
- (id)initWithAsset:(id)a0 temporary:(BOOL)a1;
- (id)initWithPackage:(id)a0 temporary:(BOOL)a1;
- (id)openWithOperation:(id)a0 error:(id *)a1;
- (id)readBytesOfInMemoryAssetContentWithContainer:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)setupForReReferenceWithAsset:(id)a0 destinationDatabaseScope:(long long)a1;

@end
