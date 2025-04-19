@interface MKBlurBackedControlProxy : NSProxy

@property (retain, nonatomic) id control;
@property (retain, nonatomic) id maskControl;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithControl:(id)a0 maskControl:(id)a1;

@end
