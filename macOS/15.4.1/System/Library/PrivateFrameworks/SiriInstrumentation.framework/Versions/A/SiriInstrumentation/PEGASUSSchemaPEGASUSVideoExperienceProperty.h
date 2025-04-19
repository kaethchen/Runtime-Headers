@class NSData;

@interface PEGASUSSchemaPEGASUSVideoExperienceProperty : SISchemaInstrumentationMessage {
    struct { unsigned char isForegroundAppAvailable : 1; unsigned char isRecommendationRequest : 1; unsigned char isThirdPartyRequest : 1; } _has;
}

@property (nonatomic) BOOL isForegroundAppAvailable;
@property (nonatomic) BOOL hasIsForegroundAppAvailable;
@property (nonatomic) BOOL isRecommendationRequest;
@property (nonatomic) BOOL hasIsRecommendationRequest;
@property (nonatomic) BOOL isThirdPartyRequest;
@property (nonatomic) BOOL hasIsThirdPartyRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsForegroundAppAvailable;
- (void)deleteIsRecommendationRequest;
- (void)deleteIsThirdPartyRequest;
- (id)suppressMessageUnderConditions;

@end
