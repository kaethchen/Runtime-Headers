@class NSCalendar, NSDate;

@interface STDowntimeConfiguration : NSObject <NSCopying>

@property (readonly) long long currentState;
@property (readonly, copy) NSDate *currentDate;
@property (readonly) long long nextState;
@property (readonly, copy) NSDate *nextStateChangeDate;
@property (readonly, copy) NSCalendar *calendar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentState:(long long)a0 currentDate:(id)a1 nextState:(long long)a2 nextStateChangeDate:(id)a3 calendar:(id)a4;
- (BOOL)isEqualToDowntimeState:(id)a0;

@end
