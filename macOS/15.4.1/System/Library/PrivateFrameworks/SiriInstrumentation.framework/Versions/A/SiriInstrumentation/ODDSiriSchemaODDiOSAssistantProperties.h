@class ODDSiriSchemaODDiOSResponseProperties, NSData, NSArray, ODDSiriSchemaODDSiriInCallProperties, ODDSiriSchemaODDiOSAccessibilityProperties, ODDSiriSchemaODDAutoSendMessageProperties, ODDSiriSchemaODDAnnounceProperties, ODDSiriSchemaODDCarPlayProperties, ODDSiriSchemaODDHeadGestureProperties;

@interface ODDSiriSchemaODDiOSAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isPressSideButtonForSiriEnabled : 1; unsigned char isAllowSiriWhenLockedEnabled : 1; } _has;
}

@property (nonatomic) BOOL isPressSideButtonForSiriEnabled;
@property (nonatomic) BOOL hasIsPressSideButtonForSiriEnabled;
@property (nonatomic) BOOL isAllowSiriWhenLockedEnabled;
@property (nonatomic) BOOL hasIsAllowSiriWhenLockedEnabled;
@property (retain, nonatomic) ODDSiriSchemaODDiOSResponseProperties *response;
@property (nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ODDSiriSchemaODDiOSAccessibilityProperties *accessibility;
@property (nonatomic) BOOL hasAccessibility;
@property (retain, nonatomic) ODDSiriSchemaODDCarPlayProperties *carPlay;
@property (nonatomic) BOOL hasCarPlay;
@property (retain, nonatomic) ODDSiriSchemaODDSiriInCallProperties *siriInCall;
@property (nonatomic) BOOL hasSiriInCall;
@property (retain, nonatomic) ODDSiriSchemaODDAnnounceProperties *announce;
@property (nonatomic) BOOL hasAnnounce;
@property (retain, nonatomic) ODDSiriSchemaODDAutoSendMessageProperties *autoSendMessage;
@property (nonatomic) BOOL hasAutoSendMessage;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (retain, nonatomic) ODDSiriSchemaODDHeadGestureProperties *headGestures;
@property (nonatomic) BOOL hasHeadGestures;
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
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSubscriptionsCount;
- (void)addActiveSubscriptions:(int)a0;
- (void)clearActiveSubscriptions;
- (void)deleteAccessibility;
- (void)deleteActiveSubscriptions;
- (void)deleteAnnounce;
- (void)deleteAutoSendMessage;
- (void)deleteCarPlay;
- (void)deleteHeadGestures;
- (void)deleteIsAllowSiriWhenLockedEnabled;
- (void)deleteIsPressSideButtonForSiriEnabled;
- (void)deleteResponse;
- (void)deleteSiriInCall;
- (id)suppressMessageUnderConditions;

@end
