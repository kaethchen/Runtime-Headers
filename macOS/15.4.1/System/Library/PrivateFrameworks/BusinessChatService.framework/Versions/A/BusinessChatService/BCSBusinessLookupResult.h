@class NSString;
@protocol BCSBusinessConfig, BCSItemIdentifying;

@interface BCSBusinessLookupResult : NSObject <BCSBusinessLookupQueryResult>

@property (nonatomic) BOOL hasBusiness;
@property (nonatomic) long long matchingTruncatedHash;
@property (retain, nonatomic) id<BCSBusinessConfig> config;
@property (retain, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForMatchWithTruncatedHash:(long long)a0;
- (id)initForMatchWithTruncatedHash:(long long)a0 config:(id)a1;
- (id)initForNoMatch;
- (id)initForNoMatchWithConfig:(id)a0;
- (id)initWithFilterMatchResult:(id)a0 config:(id)a1;
- (id)initWithHasBusiness:(BOOL)a0 matchingTruncatedHash:(long long)a1 config:(id)a2;

@end
