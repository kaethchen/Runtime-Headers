@class NSString;

@interface TVRMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char compressionQuality : 1; unsigned char height : 1; unsigned char width : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) BOOL hasCompressionQuality;
@property (nonatomic) float compressionQuality;

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
