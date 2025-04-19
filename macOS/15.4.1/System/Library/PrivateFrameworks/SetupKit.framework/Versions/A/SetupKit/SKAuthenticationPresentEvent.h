@class NSString;

@interface SKAuthenticationPresentEvent : SKEvent

@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) int passwordType;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithPasswordType:(int)a0 password:(id)a1;

@end
