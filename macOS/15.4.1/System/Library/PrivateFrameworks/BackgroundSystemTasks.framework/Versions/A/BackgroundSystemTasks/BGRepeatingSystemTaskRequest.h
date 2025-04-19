@interface BGRepeatingSystemTaskRequest : BGSystemTaskRequest

@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;

@end
