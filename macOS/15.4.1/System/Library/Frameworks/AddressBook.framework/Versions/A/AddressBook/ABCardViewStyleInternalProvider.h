@class ABCardViewStyleProvider, ABCardViewStyle;

@interface ABCardViewStyleInternalProvider : NSProxy

@property (readonly, nonatomic) ABCardViewStyle *style;
@property (readonly, nonatomic) ABCardViewStyleProvider *styleProvider;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0;
- (id)targetForSelector:(SEL)a0;

@end
