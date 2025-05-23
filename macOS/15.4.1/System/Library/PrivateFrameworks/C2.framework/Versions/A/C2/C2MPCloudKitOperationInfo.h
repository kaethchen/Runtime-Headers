@class NSString;

@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying> {
    struct { unsigned char operationGroupIndex : 1; unsigned char operationTriggered : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) BOOL hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) BOOL hasOperationTriggered;
@property (nonatomic) BOOL operationTriggered;
@property (nonatomic) BOOL hasOperationGroupIndex;
@property (nonatomic) unsigned int operationGroupIndex;

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

@end
