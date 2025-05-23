@class MTTimer;

@interface COMTTimerCreateAction : COMTAction

@property (readonly, copy, nonatomic) MTTimer *timer;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimer:(id)a0;

@end
