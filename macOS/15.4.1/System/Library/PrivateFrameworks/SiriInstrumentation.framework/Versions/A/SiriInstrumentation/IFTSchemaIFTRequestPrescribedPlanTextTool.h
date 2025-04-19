@class NSData;

@interface IFTSchemaIFTRequestPrescribedPlanTextTool : SISchemaInstrumentationMessage {
    struct { unsigned char isExplicit : 1; } _has;
}

@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL hasIsExplicit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsExplicit;
- (id)suppressMessageUnderConditions;

@end
