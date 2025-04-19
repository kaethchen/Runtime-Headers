@class NSString, BMSafariBrowsingAssistantServerRequestContextFailed, NSData, BMSafariBrowsingAssistantServerRequestContextEnded, BMSafariBrowsingAssistantServerRequestContextStarted;

@interface BMSafariBrowsingAssistantServerRequestContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSData *webpageViewIdentifier;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BMSafariBrowsingAssistantServerRequestContextStarted *started;
@property (readonly, nonatomic) BMSafariBrowsingAssistantServerRequestContextEnded *ended;
@property (readonly, nonatomic) BMSafariBrowsingAssistantServerRequestContextFailed *failed;
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
- (id)initWithWebpageViewIdentifier:(id)a0 requestIdentifier:(id)a1 started:(id)a2 ended:(id)a3 failed:(id)a4;
- (id)initByReadFrom:(id)a0;

@end
