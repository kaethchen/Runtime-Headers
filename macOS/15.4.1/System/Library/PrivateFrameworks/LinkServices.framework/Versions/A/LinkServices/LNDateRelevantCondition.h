@class NSDate;

@interface LNDateRelevantCondition : LNRelevantCondition

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;

@end
