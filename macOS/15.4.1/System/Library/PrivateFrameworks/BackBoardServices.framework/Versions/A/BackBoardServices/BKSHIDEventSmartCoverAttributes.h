@interface BKSHIDEventSmartCoverAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int smartCoverState;
@property (nonatomic) int wakeAnimationStyle;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;

@end
