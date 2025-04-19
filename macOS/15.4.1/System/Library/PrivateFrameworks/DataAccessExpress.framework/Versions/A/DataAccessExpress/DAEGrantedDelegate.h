@class NSString;

@interface DAEGrantedDelegate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (nonatomic) long long permission;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
