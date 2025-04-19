@interface AFLocationFetchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double desiredAccuracy;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double timeout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
