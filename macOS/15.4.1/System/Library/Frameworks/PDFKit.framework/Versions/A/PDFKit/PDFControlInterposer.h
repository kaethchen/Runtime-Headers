@interface PDFControlInterposer : NSObject

@property (retain) id actualTarget;
@property SEL actualAction;
@property (retain) id actualSender;
@property (copy) id /* block */ filterBlock;

- (void).cxx_destruct;
- (void)filterAction:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 sender:(id)a2;

@end
