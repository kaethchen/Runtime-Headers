@class NSString, NSDate;

@interface BMPersonalizedSensingMomentsContextContextFetchDetails : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int fetchId;
@property (nonatomic) BOOL hasFetchId;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) NSString *alternateClientIdentifier;
@property (readonly, nonatomic) unsigned int totalContextReplyCount;
@property (nonatomic) BOOL hasTotalContextReplyCount;
@property (readonly, nonatomic) unsigned int batchContextReplyStartIndex;
@property (nonatomic) BOOL hasBatchContextReplyStartIndex;
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
- (id)initWithFetchId:(id)a0 timestamp:(id)a1 clientBundleIdentifier:(id)a2 alternateClientIdentifier:(id)a3 totalContextReplyCount:(id)a4 batchContextReplyStartIndex:(id)a5;

@end
