@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray *_localizedStrings;
}

@property (retain, nonatomic) NSMutableArray *localizedStrings;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedStringType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocalizedString:(id)a0;
- (id)bestLocalizedName;
- (void)clearLocalizedStrings;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizedStringAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedStringsCount;
- (void)readAll:(BOOL)a0;

@end
