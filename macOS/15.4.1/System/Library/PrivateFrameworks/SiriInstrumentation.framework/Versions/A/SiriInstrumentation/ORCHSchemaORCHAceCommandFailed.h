@class NSData;

@interface ORCHSchemaORCHAceCommandFailed : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char aceCommandType : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int aceCommandType;
@property (nonatomic) BOOL hasAceCommandType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceCommandType;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
