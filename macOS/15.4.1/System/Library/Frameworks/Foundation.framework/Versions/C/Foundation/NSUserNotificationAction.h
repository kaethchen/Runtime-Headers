@class NSString;

@interface NSUserNotificationAction : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
