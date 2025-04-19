@class AXFUIElement;

@interface SCRChildrenHashNode : NSObject

@property (retain, nonatomic) AXFUIElement *uiElement;
@property (nonatomic) unsigned long long *childrenCount;
@property (nonatomic) unsigned long long childrenHash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0 childrenHash:(unsigned long long)a1;
- (BOOL)didChildrenHashChange;

@end
