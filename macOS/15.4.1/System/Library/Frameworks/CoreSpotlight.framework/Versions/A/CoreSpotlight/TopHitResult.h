@class NSString, PRSRankingItem, NSDate;

@interface TopHitResult : NSObject

@property (nonatomic) unsigned __int128 score;
@property (nonatomic) float scoreL1;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *dataclass;
@property (retain, nonatomic) NSDate *interestingDate;
@property (retain, nonatomic) NSString *threadId;
@property (readonly, nonatomic) PRSRankingItem *rankingItem;

- (void).cxx_destruct;
- (id)initWithRankingItem:(id)a0;

@end
