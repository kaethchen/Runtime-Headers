@class NSData;

@interface MTSchemaMTLanguageIdentificationConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char confidenceInThousands : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int confidenceInThousands;
@property (nonatomic) BOOL hasConfidenceInThousands;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidenceInThousands;
- (void)deleteLocale;
- (id)suppressMessageUnderConditions;

@end
