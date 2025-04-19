@class NSString, NSData, SCRCIndexMap;

@interface SCRElementHashMarker : NSObject {
    NSString *_title;
    NSString *_roleDescription;
    unsigned long long _mask;
    struct __AXUIElement { } *_elementRef;
    NSData *_context;
    unsigned long long _childCount;
    SCRCIndexMap *_attributes;
    unsigned long long _axChildIndex;
    unsigned long long _index;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    unsigned long long _roleHash;
    long long _type;
}

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)hashMarkersForAttributesInText:(id)a0 startingAtIndex:(unsigned long long)a1 ofUIElement:(id)a2 markerListIndex:(unsigned long long)a3 axChildIndex:(unsigned long long)a4;
+ (id)hashMarkersForText:(id)a0 startingAtIndex:(unsigned long long)a1 ofUIElement:(id)a2 markerListIndex:(unsigned long long)a3 axChildIndex:(unsigned long long)a4;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)element;
- (long long)compareGeometry:(id)a0;
- (void)setElement:(id)a0;
- (id)attributeForKey:(long long)a0;
- (BOOL)hasMask:(unsigned long long)a0;
- (id)uiElement;
- (void)setUIElement:(id)a0;
- (void)updateMarker;

@end
