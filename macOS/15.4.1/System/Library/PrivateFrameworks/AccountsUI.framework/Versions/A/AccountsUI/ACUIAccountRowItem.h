@class NSString, ACAccount;

@interface ACUIAccountRowItem : NSObject

@property (retain) ACAccount *account;
@property (retain) NSString *identifier;
@property BOOL isHeader;

+ (id)headerRowItemWithAccount:(id)a0;
+ (id)rowItemWithAccount:(id)a0;

- (void).cxx_destruct;

@end
