@class NSString, NSData;

@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *responseModel;
@property (nonatomic) BOOL hasResponseModel;
@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL hasVersion;
@property (copy, nonatomic) NSString *responseViewId;
@property (nonatomic) BOOL hasResponseViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePatternId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteResponseModel;
- (void)deleteResponseViewId;
- (void)deleteVersion;
- (id)suppressMessageUnderConditions;

@end
