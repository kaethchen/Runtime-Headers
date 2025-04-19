@class CKDPAssetsToDownload, NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char requestEncryptedAssetUserIdentifiers : 1; unsigned char shouldFailBatch : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (readonly, nonatomic) BOOL hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (readonly, nonatomic) BOOL hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;
@property (readonly, nonatomic) BOOL hasGetAssetURL;
@property (retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) BOOL hasShouldFailBatch;
@property (nonatomic) BOOL shouldFailBatch;
@property (nonatomic) BOOL hasRequestEncryptedAssetUserIdentifiers;
@property (nonatomic) BOOL requestEncryptedAssetUserIdentifiers;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
