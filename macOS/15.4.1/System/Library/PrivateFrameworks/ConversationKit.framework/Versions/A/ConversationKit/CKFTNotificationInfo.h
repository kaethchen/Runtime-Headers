@class NSString, NSImage;

@interface CKFTNotificationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *actionButtonTitle;
@property (readonly, nonatomic) NSImage *appIcon;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 actionButtonTitle:(id)a2 error:(id *)a3;

@end
