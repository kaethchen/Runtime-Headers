@class NSData;

@interface CloudKitSchemaCKErrorReported : SISchemaInstrumentationMessage {
    struct { unsigned char errorType : 1; } _has;
}

@property (nonatomic) int errorType;
@property (nonatomic) BOOL hasErrorType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorType;
- (id)suppressMessageUnderConditions;

@end
