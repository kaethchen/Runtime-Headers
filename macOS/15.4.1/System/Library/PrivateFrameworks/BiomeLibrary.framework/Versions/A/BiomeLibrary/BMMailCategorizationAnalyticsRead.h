@class NSString;

@interface BMMailCategorizationAnalyticsRead : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *accountId;
@property (readonly, nonatomic) int messageId;
@property (nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) int readTimestamp;
@property (nonatomic) BOOL hasReadTimestamp;
@property (readonly, nonatomic) BOOL readWithCategoriesEnabled;
@property (nonatomic) BOOL hasReadWithCategoriesEnabled;
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
- (id)initWithAccountId:(id)a0 messageId:(id)a1 readTimestamp:(id)a2 readWithCategoriesEnabled:(id)a3;

@end
