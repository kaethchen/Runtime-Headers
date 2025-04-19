@class NSString, NSImage, NSUUID;

@interface CNKNoticeRecipe : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *primaryActionTitle;
@property (readonly, copy, nonatomic) NSString *secondaryActionTitle;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 primaryActionTitle:(id)a3 secondaryActionTitle:(id)a4 type:(long long)a5;

@end
