@interface NSFileSecurity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)__sfl_acls;
- (id)__sfl_ownerID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
