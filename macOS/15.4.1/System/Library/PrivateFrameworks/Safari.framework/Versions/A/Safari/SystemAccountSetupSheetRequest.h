@class NSString;

@interface SystemAccountSetupSheetRequest : SheetRequest

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;

- (void).cxx_destruct;
- (void)displaySheet;
- (id)initWithDomain:(id)a0 username:(id)a1 password:(id)a2;

@end
