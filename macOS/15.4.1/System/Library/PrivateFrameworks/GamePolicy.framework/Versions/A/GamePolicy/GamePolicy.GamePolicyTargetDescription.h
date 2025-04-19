@class NSString;

@interface GamePolicy.GamePolicyTargetDescription : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ euid;
    void /* unknown type, empty encoding */ auditToken;
    void /* unknown type, empty encoding */ targetDescription;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
