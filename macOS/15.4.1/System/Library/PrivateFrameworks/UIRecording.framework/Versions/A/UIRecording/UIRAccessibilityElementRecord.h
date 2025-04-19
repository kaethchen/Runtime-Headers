@class NSMutableDictionary;

@interface UIRAccessibilityElementRecord : NSObject <NSSecureCoding> {
    NSMutableDictionary *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)accessibilityStackWithStartingElement:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (struct CGPoint { double x0; double x1; })position;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)properties;
- (void)setProperties:(id)a0;
- (id)initWithAXUIElement:(struct __AXUIElement { } *)a0 withParentAXUIElement:(struct __AXUIElement { } *)a1;
- (id)objectForAXValue:(void *)a0;

@end
