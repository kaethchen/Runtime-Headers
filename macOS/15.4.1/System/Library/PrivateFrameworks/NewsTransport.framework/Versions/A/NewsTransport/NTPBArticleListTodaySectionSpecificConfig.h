@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleListID;
@property (retain, nonatomic) NSString *articleListID;

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
