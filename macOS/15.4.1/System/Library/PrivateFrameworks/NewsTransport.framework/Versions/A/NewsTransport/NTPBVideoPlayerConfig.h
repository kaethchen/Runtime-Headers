@class NSString;

@interface NTPBVideoPlayerConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosTitle;
@property (retain, nonatomic) NSString *discoverMoreVideosTitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosSubtitle;
@property (retain, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (readonly, nonatomic) BOOL hasDiscoverMoreVideosUrl;
@property (retain, nonatomic) NSString *discoverMoreVideosUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
