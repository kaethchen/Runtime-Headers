@class NSString;

@interface __GamePolicyAgentUpdateGameEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ auditTokenNSValue;
    void /* unknown type, empty encoding */ date;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
