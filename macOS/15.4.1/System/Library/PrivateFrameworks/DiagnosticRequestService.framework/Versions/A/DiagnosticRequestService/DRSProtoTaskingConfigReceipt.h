@class NSString, DRSProtoTaskingConfigMetadata;

@interface DRSProtoTaskingConfigReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasTaskingConfigMetadata;
@property (retain, nonatomic) DRSProtoTaskingConfigMetadata *taskingConfigMetadata;
@property (readonly, nonatomic) BOOL hasReceiptResult;
@property (retain, nonatomic) NSString *receiptResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
