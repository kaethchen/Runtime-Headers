@class NSData;

@interface POMMESSchemaPOMMESRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char pommesSearchReason : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic) BOOL hasPommesSearchReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deletePommesSearchReason;
- (id)suppressMessageUnderConditions;

@end
