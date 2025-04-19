@class NSString, AXFUIElement;

@interface AXFFaultingElementArray : AXFFaultingArray <AXFFaultingArrayDataSource>

@property (retain, nonatomic) AXFUIElement *_uiElement;
@property (copy, nonatomic) NSString *_attribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arrayWithUIElement:(id)a0 attribute:(id)a1;

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)copyElementsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)elementsCount;
- (id)initWithUIElement:(id)a0 attribute:(id)a1;
- (id)nilSentinel;

@end
