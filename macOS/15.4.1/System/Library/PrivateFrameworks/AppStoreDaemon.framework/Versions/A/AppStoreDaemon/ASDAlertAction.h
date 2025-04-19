@class NSUUID, NSString;

@interface ASDAlertAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;

+ (id)actionWithTitle:(id)a0;
+ (id)actionWithTitle:(id)a0 style:(long long)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1;

@end
