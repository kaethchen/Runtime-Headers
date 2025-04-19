@class NSString, NSDictionary, NSData, NSURL, NSDate, NSError;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSData *masterAssetHash;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSURL *MMCSURL;
@property (retain, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSString *assetCollectionGUID;
@property (retain, nonatomic) NSDate *batchCreationDate;
@property (retain, nonatomic) NSDate *photoCreationDate;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long mediaAssetType;
@property (nonatomic) BOOL assetDataAvailableOnServer;
@property (retain, nonatomic) NSData *fileHash;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long protocolFileSize;
@property (retain, nonatomic) NSString *MMCSUTI;
@property (nonatomic) unsigned long long MMCSItemID;
@property (retain, nonatomic) NSData *MMCSHash;
@property (nonatomic) unsigned long long MMCSItemSize;
@property (retain, nonatomic) NSError *MMCSError;
@property (retain, nonatomic) NSString *MMCSAccessHeader;
@property (retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;
@property (retain, nonatomic) NSString *MMCSReceipt;
@property (nonatomic) unsigned int MMCSItemFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)asset;
+ (id)assetWithAsset:(id)a0;
+ (id)MSASPAssetFromProtocolDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isVideo;
- (BOOL)isPhoto;
- (id)metadataValueForKey:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (id)initWithGUID:(id)a0;
- (id)MMCSItemType;
- (id)MSASPProtocolDictionary;
- (int)MMCSOpenNewFileDescriptor;
- (unsigned long long)_fileSizeOnDisk;
- (unsigned long long)_fileSize;
- (void)addMetadataValue:(id)a0 forKey:(id)a1;
- (void)setMMCSAccessHeader:(id)a0 andTimeStamp:(id)a1;

@end
