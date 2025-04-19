@class NSString;

@interface AXPSignpostEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subsystem;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long machtime;
@property (copy, nonatomic) NSString *metadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_typeToString:(long long)a0;

@end
