@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long usagePage;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, nonatomic) BOOL buttonPressed;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 remoteMetadata:(struct AWRemoteMetadata { long long x0; long long x1; unsigned long long x2; BOOL x3; } *)a2;
- (void)validateMask;

@end
