@class NSData;

@interface RRSchemaRRPullerFailed : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char isTimeout : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsTimeout;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
