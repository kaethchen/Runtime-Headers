@class CKDPRecordType, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (retain, nonatomic) NSMutableArray *assetFields;

+ (Class)assetFieldsType;

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
- (void)addAssetFields:(id)a0;
- (id)assetFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)assetFieldsCount;
- (void)clearAssetFields;

@end
