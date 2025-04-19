@class HistoryItem;

@interface _TopSiteCandidate : NSObject

@property (readonly, nonatomic) HistoryItem *historyItem;
@property (readonly, nonatomic) double score;

- (id)debugDescription;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithHistoryItem:(id)a0 score:(double)a1;

@end
