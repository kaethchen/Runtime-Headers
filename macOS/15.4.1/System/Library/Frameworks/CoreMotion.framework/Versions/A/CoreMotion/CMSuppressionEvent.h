@interface CMSuppressionEvent : CMLogItem {
    long long fType;
    unsigned long long fReason;
    unsigned long long fFacedownState;
    double fTimeSinceLastFacedownStatic;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long facedownState;
@property (readonly, nonatomic) double timeSinceLastFacedownStatic;

+ (BOOL)supportsSecureCoding;
+ (id)stringForEventFacedownState:(unsigned long long)a0;
+ (id)stringForEventReason:(unsigned long long)a0;
+ (id)stringForEventType:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 reason:(unsigned long long)a1 facedownState:(unsigned long long)a2 timestamp:(double)a3;
- (id)initWithEventType:(long long)a0 reason:(unsigned long long)a1 facedownState:(unsigned long long)a2 timestamp:(double)a3 timeSinceLastFacedownStatic:(double)a4;
- (id)initWithEventType:(long long)a0 reason:(unsigned long long)a1 timestamp:(double)a2;

@end
