@class NSString;

@interface AMPModalSwitchCell : NSTableCellView

@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) long long switchState;
@property (nonatomic) BOOL switchEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)commonSetup;
- (id)initWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (id)propertyKeysForViewSpy;
- (void)reflectActionButton:(id)a0;

@end
