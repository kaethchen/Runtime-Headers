@interface ULBGNonRepeatingSystemTaskRequest : ULBGSystemTaskRequest

@property (nonatomic) double scheduleAfter;
@property (nonatomic) double trySchedulingBefore;

- (id)createRequestFromSelf;
- (id)initWithIdentifier:(id)a0 scheduleAfter:(double)a1 trySchedulingBefore:(double)a2;

@end
