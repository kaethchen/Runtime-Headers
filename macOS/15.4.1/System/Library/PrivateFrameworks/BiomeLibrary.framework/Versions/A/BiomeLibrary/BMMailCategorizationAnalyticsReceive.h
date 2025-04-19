@class NSString;

@interface BMMailCategorizationAnalyticsReceive : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *accountId;
@property (readonly, nonatomic) int messageId;
@property (nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) int senderId;
@property (nonatomic) BOOL hasSenderId;
@property (readonly, nonatomic) int receivingAccountDomain;
@property (nonatomic) BOOL hasReceivingAccountDomain;
@property (readonly, nonatomic) NSString *metadataPrimaryKey;
@property (readonly, nonatomic) int predictedCategory;
@property (nonatomic) BOOL hasPredictedCategory;
@property (readonly, nonatomic) int currCategoryView;
@property (nonatomic) BOOL hasCurrCategoryView;
@property (readonly, nonatomic) NSString *reasonCodes;
@property (readonly, nonatomic) int receiveTimestamp;
@property (nonatomic) BOOL hasReceiveTimestamp;
@property (readonly, nonatomic) BOOL isAllInboxesCategoriesEnabled;
@property (nonatomic) BOOL hasIsAllInboxesCategoriesEnabled;
@property (readonly, nonatomic) BOOL isMailAccountPersonalAccount;
@property (nonatomic) BOOL hasIsMailAccountPersonalAccount;
@property (readonly, nonatomic) BOOL isMailAccountCategoriesEnabled;
@property (nonatomic) BOOL hasIsMailAccountCategoriesEnabled;
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
- (id)initWithAccountId:(id)a0 messageId:(id)a1 senderId:(id)a2 receivingAccountDomain:(id)a3 metadataPrimaryKey:(id)a4 predictedCategory:(id)a5 currCategoryView:(id)a6 reasonCodes:(id)a7 receiveTimestamp:(id)a8 isAllInboxesCategoriesEnabled:(id)a9 isMailAccountPersonalAccount:(id)a10 isMailAccountCategoriesEnabled:(id)a11;

@end
