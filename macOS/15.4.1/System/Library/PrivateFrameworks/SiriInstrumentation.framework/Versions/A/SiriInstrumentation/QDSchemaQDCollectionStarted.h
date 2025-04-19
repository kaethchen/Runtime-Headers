@class NSArray, NSData;

@interface QDSchemaQDCollectionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSArray *callers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)callersAtIndex:(unsigned long long)a0;
- (void)addCallers:(int)a0;
- (unsigned long long)callersCount;
- (void)clearCallers;
- (void)deleteCallers;
- (void)deleteExists;
- (id)suppressMessageUnderConditions;

@end
