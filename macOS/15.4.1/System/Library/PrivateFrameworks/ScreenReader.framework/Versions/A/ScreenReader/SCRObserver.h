@class AXFUIElement, NSString, NSDictionary, NSMutableArray;

@interface SCRObserver : SCRCTargetSelector <NSCopying> {
    struct __AXUIElement { } *_axElementRef;
}

@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned int cancelMask;
@property (retain, nonatomic) AXFUIElement *uiElement;
@property (retain, nonatomic) AXFUIElement *origUIElement;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, setter=_setValid:) BOOL _isValid;
@property (retain, nonatomic, setter=_setFiringCopies:) NSMutableArray *_firingCopies;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (struct __AXUIElement { } *)axElementRef;
- (id)_dequeueFiringCopyWithAXUIElementRef:(struct __AXUIElement { } *)a0 originalUIElement:(id)a1 userInfo:(id)a2;
- (void)_enqueueFiringCopy:(id)a0;
- (void)_setAXElementRef:(struct __AXUIElement { } *)a0;
- (void)fireWithAXUIElementRef:(struct __AXUIElement { } *)a0 origUIElement:(id)a1 userInfo:(id)a2;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 name:(id)a2 cancelMask:(unsigned int)a3;

@end
