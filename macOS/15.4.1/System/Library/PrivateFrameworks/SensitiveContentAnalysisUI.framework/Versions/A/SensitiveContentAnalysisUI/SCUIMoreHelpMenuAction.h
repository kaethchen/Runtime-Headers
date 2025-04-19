@class NSString;

@interface SCUIMoreHelpMenuAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy) NSString *iconSystemName;
@property (nonatomic) BOOL destructive;
@property (nonatomic) long long actionID;

+ (id)action:(id)a0 iconSystemName:(id)a1 destructive:(BOOL)a2 actionID:(long long)a3;

- (void).cxx_destruct;

@end
