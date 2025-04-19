@class NSString;
@protocol BCSItemIdentifying, BCSBusinessConfig;

@interface BCSQuery : NSObject <BCSBusinessQuery>

@property (retain, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (retain, nonatomic) id<BCSBusinessConfig> config;
@property (nonatomic) long long shardType;
@property (retain, nonatomic) NSString *clientBundleId;
@property (nonatomic) BOOL skipRegistrationCheck;
@property (nonatomic) BOOL cacheOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateConfig:(id)a0;
- (id)initWithItemIdentifier:(id)a0 clientBundleId:(id)a1 shardType:(long long)a2;
- (id)initWithItemIdentifier:(id)a0 clientBundleId:(id)a1 shardType:(long long)a2 cacheOnly:(BOOL)a3;
- (id)initWithItemIdentifier:(id)a0 clientBundleId:(id)a1 shardType:(long long)a2 skipRegistrationCheck:(BOOL)a3;
- (id)initWithItemIdentifier:(id)a0 config:(id)a1 clientBundleId:(id)a2 shardType:(long long)a3;
- (id)initWithItemIdentifier:(id)a0 config:(id)a1 clientBundleId:(id)a2 shardType:(long long)a3 skipRegistrationCheck:(BOOL)a4;

@end
