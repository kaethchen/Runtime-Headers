@class NSMutableArray;

@interface HMImmutableSettingsProtoAvailableLanguageListEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *languages;

+ (Class)languagesType;

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
- (void)clearLanguages;
- (unsigned long long)languagesCount;
- (void)addLanguages:(id)a0;
- (id)languagesAtIndex:(unsigned long long)a0;

@end
