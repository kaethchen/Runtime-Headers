@class NSArray, NSData, SISchemaUUID;

@interface STSchemaSTGeneralSearchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseDialogSource : 1; unsigned char dialogFallbackReason : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int responseDialogSource;
@property (nonatomic) BOOL hasResponseDialogSource;
@property (nonatomic) int dialogFallbackReason;
@property (nonatomic) BOOL hasDialogFallbackReason;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)resultAtIndex:(unsigned long long)a0;
- (unsigned long long)resultCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResult:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearResult;
- (void)deleteDialogFallbackReason;
- (void)deleteLinkId;
- (void)deleteResponseDialogSource;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
