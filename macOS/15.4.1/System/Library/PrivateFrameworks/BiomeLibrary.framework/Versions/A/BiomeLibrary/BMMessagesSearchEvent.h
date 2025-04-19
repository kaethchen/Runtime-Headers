@class BMMessagesSearchEventInputDetected, NSString, BMMessagesSearchEventUserInteractionDetected, BMMessagesSearchEventMessagesAppViewContext, BMMessagesSearchEventDisplayContext, BMMessagesSearchEventResultReceived, BMMessagesSearchEventDimensionContext, BMMessagesSearchEventSessionIdResetContext, BMMessagesSearchEventSearchViewContext;

@interface BMMessagesSearchEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMessagesSearchEventDimensionContext *dimensionContext;
@property (readonly, nonatomic) BMMessagesSearchEventInputDetected *inputDetected;
@property (readonly, nonatomic) BMMessagesSearchEventUserInteractionDetected *userInteractionDetected;
@property (readonly, nonatomic) BMMessagesSearchEventDisplayContext *displayContext;
@property (readonly, nonatomic) BMMessagesSearchEventSearchViewContext *searchViewContext;
@property (readonly, nonatomic) BMMessagesSearchEventResultReceived *resultReceived;
@property (readonly, nonatomic) BMMessagesSearchEventMessagesAppViewContext *messagesAppViewContext;
@property (readonly, nonatomic) BMMessagesSearchEventSessionIdResetContext *sessionIdResetContext;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDimensionContext:(id)a0 inputDetected:(id)a1 userInteractionDetected:(id)a2 displayContext:(id)a3 searchViewContext:(id)a4 resultReceived:(id)a5 messagesAppViewContext:(id)a6 sessionIdResetContext:(id)a7;

@end
