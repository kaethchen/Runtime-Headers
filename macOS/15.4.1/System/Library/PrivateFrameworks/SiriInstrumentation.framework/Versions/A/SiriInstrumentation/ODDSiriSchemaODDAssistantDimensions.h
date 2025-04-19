@class NSString, NSArray, NSData, SISchemaISOLocale;

@interface ODDSiriSchemaODDAssistantDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char dataSharingOptInStatus : 1; unsigned char viewInterface : 1; unsigned char asrLocation : 1; unsigned char nlLocation : 1; unsigned char responseCategory : 1; unsigned char isIntelligenceEngineRequest : 1; unsigned char invocationSource : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
@property (nonatomic) int asrLocation;
@property (nonatomic) BOOL hasAsrLocation;
@property (nonatomic) int nlLocation;
@property (nonatomic) BOOL hasNlLocation;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (copy, nonatomic) NSString *subDomain;
@property (nonatomic) BOOL hasSubDomain;
@property (nonatomic) int responseCategory;
@property (nonatomic) BOOL hasResponseCategory;
@property (nonatomic) BOOL isIntelligenceEngineRequest;
@property (nonatomic) BOOL hasIsIntelligenceEngineRequest;
@property (copy, nonatomic) NSArray *routings;
@property (nonatomic) int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSubDomain;
- (int)routingAtIndex:(unsigned long long)a0;
- (void)addRouting:(int)a0;
- (void)clearRouting;
- (void)deleteAsrLocation;
- (void)deleteAudioInterfaceProductId;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteDataSharingOptInStatus;
- (void)deleteInvocationSource;
- (void)deleteIsIntelligenceEngineRequest;
- (void)deleteNlLocation;
- (void)deleteResponseCategory;
- (void)deleteRouting;
- (void)deleteSiriInputLocale;
- (void)deleteSystemBuild;
- (void)deleteViewInterface;
- (unsigned long long)routingCount;
- (id)suppressMessageUnderConditions;

@end
