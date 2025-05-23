@class NSString, NSData;

@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidence;
- (void)deleteLocale;
- (id)suppressMessageUnderConditions;

@end
