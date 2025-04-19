@interface WFCategoryJudgement : NSObject

@property float score;
@property long long category;

+ (id)categoryJudgementWithCategory:(long long)a0 score:(float)a1;

- (id)description;
- (long long)compareByScore:(id)a0;
- (long long)compareByCategory:(id)a0;

@end
