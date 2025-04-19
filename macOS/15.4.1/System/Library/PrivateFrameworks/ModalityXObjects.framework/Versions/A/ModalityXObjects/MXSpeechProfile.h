@class NSData;

@interface MXSpeechProfile : PBCodable <NSCopying> {
    struct { unsigned char moreDataFollows : 1; } _has;
}

@property (nonatomic) BOOL hasMoreDataFollows;
@property (nonatomic) BOOL moreDataFollows;
@property (readonly, nonatomic) BOOL hasLanguageProfile;
@property (retain, nonatomic) NSData *languageProfile;

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
