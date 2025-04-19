@class NSView;

@interface CDPUIADPUpsellViewController : OBTemplateContainerViewController

@property (readonly, nonatomic) NSView *contentView;
@property (copy, nonatomic) id /* block */ turnOnButtonAction;
@property (copy, nonatomic) id /* block */ cancelButtonAction;
@property (copy, nonatomic) id /* block */ setUpLaterButtonAction;

- (void).cxx_destruct;
- (void)_cancelButtonSelected:(id)a0;
- (id)templateContainerView;
- (void)_setUpLaterButtonSelected:(id)a0;
- (void)_turnOnButtonSelected:(id)a0;
- (id)initWithContentView:(id)a0 turnOnButtonAction:(id /* block */)a1 cancelButtonAction:(id /* block */)a2 setUpLaterButtonAction:(id /* block */)a3;

@end
