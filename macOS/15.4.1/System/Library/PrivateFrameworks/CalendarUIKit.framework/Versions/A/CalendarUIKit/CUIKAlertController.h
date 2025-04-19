@class NSString, NSArray, NSMutableArray;

@interface CUIKAlertController : NSObject {
    NSMutableArray *_actions;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;

+ (id)alertControllerWithTitle:(id)a0 message:(id)a1;

- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)presentFromSource:(id)a0;

@end
