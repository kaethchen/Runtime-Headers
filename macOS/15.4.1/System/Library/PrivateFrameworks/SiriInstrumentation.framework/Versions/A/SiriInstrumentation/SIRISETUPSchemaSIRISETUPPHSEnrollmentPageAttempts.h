@class NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentPageAttempts : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char numAttempts : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) unsigned int numAttempts;
@property (nonatomic) BOOL hasNumAttempts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumAttempts;
- (void)deletePageNumber;
- (id)suppressMessageUnderConditions;

@end
