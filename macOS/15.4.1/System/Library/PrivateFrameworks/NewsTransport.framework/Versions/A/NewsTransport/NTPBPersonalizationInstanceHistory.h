@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {
    struct { unsigned char lastChangeNumber : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (nonatomic) unsigned long long lastChangeNumber;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
