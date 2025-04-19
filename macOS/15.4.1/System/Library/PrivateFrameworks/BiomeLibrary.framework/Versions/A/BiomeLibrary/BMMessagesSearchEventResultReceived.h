@class NSString;

@interface BMMessagesSearchEventResultReceived : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long millisecondsSinceSessionStarted;
@property (nonatomic) BOOL hasMillisecondsSinceSessionStarted;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *queryId;
@property (readonly, nonatomic) BOOL noResultReceived;
@property (nonatomic) BOOL hasNoResultReceived;
@property (readonly, nonatomic) unsigned long long totalConversations;
@property (nonatomic) BOOL hasTotalConversations;
@property (readonly, nonatomic) unsigned long long totalTokens;
@property (nonatomic) BOOL hasTotalTokens;
@property (readonly, nonatomic) unsigned long long totalMessages;
@property (nonatomic) BOOL hasTotalMessages;
@property (readonly, nonatomic) unsigned long long totalLinks;
@property (nonatomic) BOOL hasTotalLinks;
@property (readonly, nonatomic) unsigned long long totalPhotos;
@property (nonatomic) BOOL hasTotalPhotos;
@property (readonly, nonatomic) unsigned long long totalLocation;
@property (nonatomic) BOOL hasTotalLocation;
@property (readonly, nonatomic) unsigned long long totalAttachments;
@property (nonatomic) BOOL hasTotalAttachments;
@property (readonly, nonatomic) unsigned long long totalWallet;
@property (nonatomic) BOOL hasTotalWallet;
@property (readonly, nonatomic) unsigned long long totalCollaboration;
@property (nonatomic) BOOL hasTotalCollaboration;
@property (readonly, nonatomic) unsigned long long totalHighlights;
@property (nonatomic) BOOL hasTotalHighlights;
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
- (id)initWithMillisecondsSinceSessionStarted:(id)a0 sessionId:(id)a1 queryId:(id)a2 noResultReceived:(id)a3 totalConversations:(id)a4 totalTokens:(id)a5 totalMessages:(id)a6 totalLinks:(id)a7 totalPhotos:(id)a8 totalLocation:(id)a9 totalAttachments:(id)a10 totalWallet:(id)a11 totalCollaboration:(id)a12 totalHighlights:(id)a13;

@end
