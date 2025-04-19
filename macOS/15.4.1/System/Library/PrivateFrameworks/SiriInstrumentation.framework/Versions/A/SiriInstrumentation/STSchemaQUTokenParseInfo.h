@class NSData;

@interface STSchemaQUTokenParseInfo : SISchemaInstrumentationMessage {
    struct { unsigned char tokenLength : 1; } _has;
}

@property (nonatomic) unsigned int tokenLength;
@property (nonatomic) BOOL hasTokenLength;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTokenLength;
- (id)suppressMessageUnderConditions;

@end
