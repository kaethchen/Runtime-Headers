@class NSData;

@interface ETPVideo : PBCodable <NSCopying> {
    struct { unsigned char mediaType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIntroMessageData;
@property (retain, nonatomic) NSData *introMessageData;
@property (readonly, nonatomic) BOOL hasPlayingMessagesData;
@property (retain, nonatomic) NSData *playingMessagesData;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMediaType:(id)a0;
- (id)mediaTypeAsString:(int)a0;

@end
