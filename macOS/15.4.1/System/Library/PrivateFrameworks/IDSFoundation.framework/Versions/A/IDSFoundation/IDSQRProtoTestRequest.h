@class NSString;

@interface IDSQRProtoTestRequest : PBRequest <NSCopying> {
    struct { unsigned char requestedErrorCode : 1; unsigned char requestedMessageType : 1; } _has;
}

@property (nonatomic) unsigned int testOptionFlags;
@property (nonatomic) BOOL hasRequestedMessageType;
@property (nonatomic) unsigned int requestedMessageType;
@property (nonatomic) BOOL hasRequestedErrorCode;
@property (nonatomic) unsigned int requestedErrorCode;
@property (readonly, nonatomic) BOOL hasSubOperation;
@property (retain, nonatomic) NSString *subOperation;

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
