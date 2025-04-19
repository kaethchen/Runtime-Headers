@class NSString;

@interface PasswordsViewItem : NSObject

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *domain;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 username:(id)a1;

@end
