@class NSString;

@interface MatchedMedSchedule : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *schedule;
@property (nonatomic, copy) NSString *scheduleID;
@property (nonatomic, copy) NSString *medName;
@property (nonatomic, copy) NSString *remainingMedCount;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
