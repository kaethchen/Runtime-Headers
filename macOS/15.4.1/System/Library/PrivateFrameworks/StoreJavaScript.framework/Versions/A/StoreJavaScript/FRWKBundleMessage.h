@class NSString, NSDictionary;

@interface FRWKBundleMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *body;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0 body:(id)a1;

@end
