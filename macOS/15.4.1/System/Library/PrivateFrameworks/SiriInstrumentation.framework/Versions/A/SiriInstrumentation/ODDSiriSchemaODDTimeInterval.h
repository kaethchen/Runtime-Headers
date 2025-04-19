@class NSData;

@interface ODDSiriSchemaODDTimeInterval : SISchemaInstrumentationMessage {
    struct { unsigned char startTimestampInSecondsSince1970 : 1; unsigned char numberOfSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long startTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasStartTimestampInSecondsSince1970;
@property (nonatomic) unsigned int numberOfSeconds;
@property (nonatomic) BOOL hasNumberOfSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumberOfSeconds;
- (void)deleteStartTimestampInSecondsSince1970;
- (id)suppressMessageUnderConditions;

@end
