@class NSString, NSArray, NSData, BMASRContextualReplayRecordRequestMetadata;

@interface BMASRContextualReplayRecord : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMASRContextualReplayRecordRequestMetadata *metadata;
@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSString *preITNTranscript;
@property (readonly, nonatomic) NSString *postITNTranscript;
@property (readonly, nonatomic) NSData *profile;
@property (readonly, nonatomic) NSArray *contextualEntities;
@property (readonly, nonatomic) NSString *userEditedText;
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
- (id)_contextualEntitiesJSONArray;
- (id)initWithMetadata:(id)a0 audio:(id)a1 preITNTranscript:(id)a2 postITNTranscript:(id)a3 profile:(id)a4 contextualEntities:(id)a5 userEditedText:(id)a6;

@end
