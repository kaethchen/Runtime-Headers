@class NSString, BMMessagesSearchEventVisualComponent;

@interface BMMessagesSearchEventUserInteractionDetected : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long millisecondsSinceSessionStarted;
@property (nonatomic) BOOL hasMillisecondsSinceSessionStarted;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *queryId;
@property (readonly, nonatomic) BMMessagesSearchEventVisualComponent *visualComponent;
@property (readonly, nonatomic) int interactionType;
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
- (id)initWithMillisecondsSinceSessionStarted:(id)a0 sessionId:(id)a1 queryId:(id)a2 visualComponent:(id)a3 interactionType:(int)a4;

@end
