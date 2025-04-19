@class NSString, NSArray, NSDate;

@interface BMIntelligencePlatformMessageTerms : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int protoVersion;
@property (nonatomic) BOOL hasProtoVersion;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *spotlightIdentifier;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSArray *termCount;
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
- (id)initWithProtoVersion:(id)a0 bundleID:(id)a1 domain:(id)a2 spotlightIdentifier:(id)a3 timestamp:(id)a4 sender:(id)a5 recipients:(id)a6 termCount:(id)a7;
- (id)initByReadFrom:(id)a0;
- (id)_recipientsJSONArray;
- (id)_termCountJSONArray;

@end
