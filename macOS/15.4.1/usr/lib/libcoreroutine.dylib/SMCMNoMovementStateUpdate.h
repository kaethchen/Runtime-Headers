@class NSDate;

@interface SMCMNoMovementStateUpdate : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDate *startTime;

+ (id)convertSMCMNoMovementStateToString:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 startTime:(id)a1;

@end
