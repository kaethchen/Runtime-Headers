@class NSString;

@interface BMPBSocialHighlightContact : PBCodable <NSCopying> {
    struct { unsigned char isMe : 1; unsigned char isSignificant : 1; } _has;
}

@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (nonatomic) BOOL hasIsMe;
@property (nonatomic) BOOL isMe;

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
