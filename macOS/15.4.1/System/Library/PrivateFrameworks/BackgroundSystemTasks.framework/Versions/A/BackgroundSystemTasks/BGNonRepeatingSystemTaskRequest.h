@interface BGNonRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) double scheduleAfter;
@property (nonatomic) double trySchedulingBefore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;

@end
