@class NSString, NSDate;

@interface BMAutonamingMessageIds : BMEventBase <BMStoreData> {
    BOOL _hasRaw_messageTimestamp;
    double _raw_messageTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int protoVersion;
@property (nonatomic) BOOL hasProtoVersion;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *spotlightId;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) BOOL isDeletion;
@property (nonatomic) BOOL hasIsDeletion;
@property (readonly, nonatomic) BOOL containsImageAttachment;
@property (nonatomic) BOOL hasContainsImageAttachment;
@property (readonly, nonatomic) NSDate *messageTimestamp;
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
- (id)initWithProtoVersion:(id)a0 bundleId:(id)a1 domainId:(id)a2 spotlightId:(id)a3 messageId:(id)a4 conversationId:(id)a5 isDeletion:(id)a6 containsImageAttachment:(id)a7 messageTimestamp:(id)a8;
- (id)initByReadFrom:(id)a0;
- (id)initWithProtoVersion:(id)a0 bundleId:(id)a1 domainId:(id)a2 spotlightId:(id)a3 messageId:(id)a4 conversationId:(id)a5 isDeletion:(id)a6 containsImageAttachment:(id)a7;

@end
