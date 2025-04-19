@class NSString;

@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
