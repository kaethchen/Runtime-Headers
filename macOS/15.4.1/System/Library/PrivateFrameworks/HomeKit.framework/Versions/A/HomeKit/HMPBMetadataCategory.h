@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct { unsigned char identifier : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
