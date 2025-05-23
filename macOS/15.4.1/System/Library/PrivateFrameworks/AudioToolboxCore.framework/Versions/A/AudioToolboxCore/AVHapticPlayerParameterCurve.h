@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding> {
    NSArray *_controlPoints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long type;
@property double time;
@property unsigned long long shape;
@property (readonly) NSArray *controlPoints;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 relativeTime:(double)a1 shape:(unsigned long long)a2 controlPoints:(id)a3;

@end
