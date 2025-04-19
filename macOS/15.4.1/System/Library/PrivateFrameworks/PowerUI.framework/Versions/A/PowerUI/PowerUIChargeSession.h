@class NSNumber, NSDate;

@interface PowerUIChargeSession : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *startSoC;
@property (readonly, nonatomic) NSNumber *endSoC;
@property (readonly, nonatomic) double duration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 withEndDate:(id)a1 withStartSoC:(id)a2 withEndSoC:(id)a3;

@end
