@class NSString;

@interface NTPBTagFollowed : PBCodable <NSCopying> {
    struct { unsigned char tagFollowMode : 1; unsigned char aLaCarteSubscribed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) BOOL hasTagFollowMode;
@property (nonatomic) int tagFollowMode;
@property (nonatomic) BOOL hasALaCarteSubscribed;
@property (nonatomic) BOOL aLaCarteSubscribed;

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
