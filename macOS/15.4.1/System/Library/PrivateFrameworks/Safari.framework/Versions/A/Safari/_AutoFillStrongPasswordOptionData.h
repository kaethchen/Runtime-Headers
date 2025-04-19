@class NSString;

@interface _AutoFillStrongPasswordOptionData : NSObject

@property (readonly, copy, nonatomic) NSString *menuItemTitle;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) long long optionType;

- (void).cxx_destruct;
- (id)initWithMenuItemTitle:(id)a0 password:(id)a1 optionType:(long long)a2;

@end
