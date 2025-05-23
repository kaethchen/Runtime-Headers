@class NSString;

@interface AOSUICodeEntryContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *promptMessage;
@property (copy, nonatomic) NSString *invalidCodeMessage;
@property (copy, nonatomic) NSString *invalidCodeTitle;
@property (copy, nonatomic) NSString *escapeTitle;
@property (copy, nonatomic) id /* block */ escapeAction;
@property (copy, nonatomic) id /* block */ codeEnteredAction;
@property (copy, nonatomic) id /* block */ cancelEntryAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
