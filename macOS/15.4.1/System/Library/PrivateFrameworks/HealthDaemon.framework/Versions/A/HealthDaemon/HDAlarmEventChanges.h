@class NSArray, NSSet;

@interface HDAlarmEventChanges : NSObject

@property (readonly, copy, nonatomic) NSArray *oldEvents;
@property (readonly, copy, nonatomic) NSArray *scheduledEvents;
@property (readonly, copy, nonatomic) NSSet *removedEvents;
@property (readonly, copy, nonatomic) NSSet *addedEvents;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOldEvents:(id)a0 scheduledEvents:(id)a1;

@end
