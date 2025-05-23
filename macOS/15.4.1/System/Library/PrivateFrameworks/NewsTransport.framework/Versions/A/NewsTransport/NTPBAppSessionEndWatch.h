@interface NTPBAppSessionEndWatch : PBCodable <NSCopying> {
    struct { unsigned char watchAppSessionDuration : 1; } _has;
}

@property (nonatomic) BOOL hasWatchAppSessionDuration;
@property (nonatomic) long long watchAppSessionDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
