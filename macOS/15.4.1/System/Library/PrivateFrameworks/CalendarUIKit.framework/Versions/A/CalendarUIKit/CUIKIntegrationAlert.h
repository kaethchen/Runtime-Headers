@class NSString, NSArray;

@interface CUIKIntegrationAlert : NSObject {
    id /* block */ _cancelBlock;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTitle:(id)a0 message:(id)a1 actions:(id)a2 cancelBlock:(id /* block */)a3;

@end
