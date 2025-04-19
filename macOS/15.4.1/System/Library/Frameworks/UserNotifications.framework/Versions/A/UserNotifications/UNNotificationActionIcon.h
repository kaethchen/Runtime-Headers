@class NSString;

@interface UNNotificationActionIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *imageName;
@property (getter=isSystemIcon) BOOL systemIcon;

+ (id)_iconWithImageName:(id)a0 systemIcon:(BOOL)a1;
+ (id)iconWithSystemImageName:(id)a0;
+ (id)iconWithTemplateImageName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_description;
- (id)_initWithImageName:(id)a0 systemIcon:(BOOL)a1;

@end
