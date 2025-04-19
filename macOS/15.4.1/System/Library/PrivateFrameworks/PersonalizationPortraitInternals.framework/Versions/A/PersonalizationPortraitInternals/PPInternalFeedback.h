@class NSString;

@interface PPInternalFeedback : PPBaseFeedback <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) unsigned char storeType;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)fromBaseFeedback:(id)a0 storeType:(unsigned char)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)serialize;
- (id)initWithFeedbackItems:(id)a0 timestamp:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (id)initWithFeedbackItems:(id)a0 timestamp:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4 storeType:(unsigned char)a5 build:(id)a6;

@end
