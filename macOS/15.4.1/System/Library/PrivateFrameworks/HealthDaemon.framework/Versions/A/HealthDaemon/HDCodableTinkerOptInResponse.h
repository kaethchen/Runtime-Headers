@class NSString, HDCodableError;

@interface HDCodableTinkerOptInResponse : PBCodable <NSCopying> {
    struct { unsigned char accepted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL hasAccepted;
@property (nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) HDCodableError *error;

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
