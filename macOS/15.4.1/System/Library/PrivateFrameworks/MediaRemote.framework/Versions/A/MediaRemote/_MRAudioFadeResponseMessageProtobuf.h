@interface _MRAudioFadeResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char fadeDuration : 1; } _has;
}

@property (nonatomic) BOOL hasFadeDuration;
@property (nonatomic) long long fadeDuration;

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
