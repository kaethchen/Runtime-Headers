@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding> {
    id _iconInfo;
    long long _iconInfoType;
    BOOL _shouldSuppressMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)iconAtPath:(id)a0;
+ (id)iconForApplicationIdentifier:(id)a0;
+ (id)iconForSystemImageNamed:(id)a0;
+ (id)iconNamed:(id)a0;
+ (id)iconAtPath:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconNamed:(id)a0 shouldSuppressMask:(BOOL)a1;
+ (id)iconWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)applicationIdentifier;
- (id)systemImageName;
- (id)_initWithIconInfo:(id)a0 type:(long long)a1 shouldSuppressMask:(BOOL)a2;
- (BOOL)shouldSuppressMask;

@end
