@class NSData, USOSchemaUSOEdgeLabel;

@interface USOSchemaUSOEdge : SISchemaInstrumentationMessage {
    struct { unsigned char fromIndex : 1; unsigned char toIndex : 1; } _has;
}

@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) unsigned int toIndex;
@property (nonatomic) BOOL hasToIndex;
@property (retain, nonatomic) USOSchemaUSOEdgeLabel *label;
@property (nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFromIndex;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLabel;
- (void)deleteToIndex;
- (id)suppressMessageUnderConditions;

@end
