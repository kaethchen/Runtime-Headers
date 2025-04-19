@class NSString;

@interface GamePolicy.GamePolicyAssertion : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
