@interface AFBluetoothHeadGestureConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isSupported;
@property (readonly, nonatomic) long long acceptGesture;
@property (readonly, nonatomic) long long rejectGesture;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsEnabled:(BOOL)a0 isSupported:(BOOL)a1 acceptGesture:(long long)a2 rejectGesture:(long long)a3;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
