@class NSData;

@interface IFTSchemaIFTQuery : SISchemaInstrumentationMessage {
    struct { unsigned char sortOrder : 1; } _has;
}

@property (nonatomic) int sortOrder;
@property (nonatomic) BOOL hasSortOrder;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSortOrder;
- (id)suppressMessageUnderConditions;

@end
