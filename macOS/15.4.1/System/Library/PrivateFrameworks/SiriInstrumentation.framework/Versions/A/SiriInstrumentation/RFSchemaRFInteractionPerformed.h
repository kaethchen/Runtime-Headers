@class NSString, NSData;

@interface RFSchemaRFInteractionPerformed : SISchemaInstrumentationMessage {
    struct { unsigned char userInteraction : 1; unsigned char visualComponent : 1; unsigned char commandType : 1; } _has;
}

@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) BOOL hasActionName;
@property (nonatomic) int userInteraction;
@property (nonatomic) BOOL hasUserInteraction;
@property (nonatomic) int visualComponent;
@property (nonatomic) BOOL hasVisualComponent;
@property (copy, nonatomic) NSString *componentName;
@property (nonatomic) BOOL hasComponentName;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (copy, nonatomic) NSString *componentIndex;
@property (nonatomic) BOOL hasComponentIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteActionName;
- (void)deleteCommandType;
- (void)deleteComponentIndex;
- (void)deleteComponentName;
- (void)deleteUserInteraction;
- (void)deleteVisualComponent;
- (id)suppressMessageUnderConditions;

@end
