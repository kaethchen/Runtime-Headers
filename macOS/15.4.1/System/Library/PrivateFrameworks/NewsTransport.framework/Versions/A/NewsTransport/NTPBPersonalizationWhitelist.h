@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)defaultTagsType;
+ (Class)disabledPortraitTagsType;
+ (Class)optionalTagsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDefaultTags:(id)a0;
- (void)addDisabledPortraitTags:(id)a0;
- (void)addOptionalTags:(id)a0;
- (void)clearDefaultTags;
- (void)clearDisabledPortraitTags;
- (void)clearOptionalTags;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)defaultTagsCount;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledPortraitTagsCount;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)optionalTagsCount;

@end
