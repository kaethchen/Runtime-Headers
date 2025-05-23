@interface PKProtobufRemoteRegistrationRequestResult : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
