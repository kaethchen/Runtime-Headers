@class NSString;

@interface AMFFeedPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *userVisibleDescription;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 uri:(id)a1 email:(id)a2;

@end
