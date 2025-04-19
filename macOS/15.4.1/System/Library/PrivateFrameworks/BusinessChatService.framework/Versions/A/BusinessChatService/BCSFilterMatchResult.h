@class NSString;
@protocol BCSItemIdentifying;

@interface BCSFilterMatchResult : NSObject <BCSFilterShardMatchResult>

@property (nonatomic) BOOL hasMatch;
@property (retain, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (nonatomic) long long matchingTruncatedHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMatch:(BOOL)a0 itemIdentifier:(id)a1 matchingTruncatedHash:(long long)a2;

@end
