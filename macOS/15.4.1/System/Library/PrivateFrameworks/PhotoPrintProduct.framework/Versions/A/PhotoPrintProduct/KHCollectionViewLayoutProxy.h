@class NSMapTable, UXCollectionViewLayout;
@protocol KHCollectionViewLayoutProxyDelegate;

@interface KHCollectionViewLayoutProxy : NSProxy

@property (retain, nonatomic) NSMapTable *methodSignituresBySelector;
@property (weak, nonatomic) id<KHCollectionViewLayoutProxyDelegate> delegate;
@property (readonly, nonatomic) UXCollectionViewLayout *layout;

+ (Class)class;
+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
