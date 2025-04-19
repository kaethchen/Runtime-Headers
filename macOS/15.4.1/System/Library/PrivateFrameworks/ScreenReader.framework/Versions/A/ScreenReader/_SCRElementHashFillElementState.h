@class NSArray, AXFUIElement;

@interface _SCRElementHashFillElementState : NSObject

@property (readonly, nonatomic) AXFUIElement *uiElement;
@property (readonly, nonatomic) unsigned long long cachedRoleHash;
@property (readonly, nonatomic) NSArray *cachedChildren;
@property (nonatomic) unsigned long long currentChildIndex;

- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;

@end
