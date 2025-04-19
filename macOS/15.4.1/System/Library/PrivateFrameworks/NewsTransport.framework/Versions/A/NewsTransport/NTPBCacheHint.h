@class NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {
    struct { unsigned char accessTime : 1; unsigned char lifetime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasLifetime;
@property (nonatomic) int lifetime;
@property (nonatomic) BOOL hasAccessTime;
@property (nonatomic) unsigned long long accessTime;

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
