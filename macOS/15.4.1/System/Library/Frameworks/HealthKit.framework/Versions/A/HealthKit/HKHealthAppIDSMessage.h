@protocol NSSecureCoding;

@interface HKHealthAppIDSMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id<NSSecureCoding> payload;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageKind:(long long)a0;

@end
