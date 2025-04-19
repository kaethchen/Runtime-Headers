@class NSArray, NSString;
@protocol BCSItemIdentifying, BCSBusinessConfig;

@interface BCSBatchQuery : BCSQuery <BCSBusinessBatchQuery>

@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSArray *shardIdentifiers;
@property (readonly, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (readonly, nonatomic) id<BCSBusinessConfig> config;
@property (readonly, nonatomic) long long shardType;
@property (readonly, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) BOOL skipRegistrationCheck;
@property (readonly, nonatomic) BOOL cacheOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 config:(id)a1 clientBundleId:(id)a2 shardType:(long long)a3 skipRegistrationCheck:(BOOL)a4;

@end
