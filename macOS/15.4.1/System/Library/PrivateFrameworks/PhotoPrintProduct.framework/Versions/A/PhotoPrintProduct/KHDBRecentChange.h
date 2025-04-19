@class NSNumber, NSDate;

@interface KHDBRecentChange : NSObject

@property (retain) NSNumber *modelIdAsNumber;
@property (nonatomic) unsigned long long mask;
@property (nonatomic) double changeDateAsInterval;
@property (retain) NSDate *changeDate;

- (void)dealloc;
- (id)initWithModelId:(id)a0 changeDate:(id)a1;

@end
