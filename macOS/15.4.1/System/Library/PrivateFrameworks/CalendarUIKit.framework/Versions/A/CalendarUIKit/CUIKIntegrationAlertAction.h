@class NSString;

@interface CUIKIntegrationAlertAction : NSObject {
    id /* block */ _handler;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
- (void)actionChosen;

@end
