@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {
    struct { unsigned char contentType : 1; unsigned char shareSheetExposureLocation : 1; } _has;
}

@property (nonatomic) BOOL hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) BOOL hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) BOOL hasShareSheetExposureLocation;
@property (nonatomic) int shareSheetExposureLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsContentType:(id)a0;
- (id)contentTypeAsString:(int)a0;

@end
