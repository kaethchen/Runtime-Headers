@class NSString, NSArray;

@interface CUIKDeleteCalendarsConfirmationInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *dialog;
@property (copy, nonatomic) NSArray *options;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 prompt:(id)a1 dialog:(id)a2 options:(id)a3;

@end
