@class NSMutableArray;

@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying> {
    NSMutableArray *_forms;
}

@property (retain, nonatomic) NSMutableArray *forms;

+ (Class)formType;
+ (BOOL)isValid:(id)a0;

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
- (void)addForm:(id)a0;
- (void)clearForms;
- (id)formAtIndex:(unsigned long long)a0;
- (unsigned long long)formsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
