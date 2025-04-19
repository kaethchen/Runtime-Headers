@class NSString;

@interface CLPConsolidation : PBCodable <NSCopying> {
    struct { unsigned char possibleDuplicate : 1; } _has;
}

@property (nonatomic) BOOL hasPossibleDuplicate;
@property (nonatomic) BOOL possibleDuplicate;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;

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
