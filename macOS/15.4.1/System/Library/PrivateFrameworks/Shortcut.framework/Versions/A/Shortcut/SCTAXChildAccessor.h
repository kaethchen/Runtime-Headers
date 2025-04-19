@class NSString, NSNumber;

@interface SCTAXChildAccessor : NSObject <NSCoding> {
    NSString *mAttribute;
    NSString *mValue;
    NSNumber *mOccurance;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)value;
- (id)attribute;
- (long long)computeOccuranceIndexForChild:(struct __AXUIElement { } *)a0 forParent:(struct __AXUIElement { } *)a1;
- (void)extractSearchAttributeAndValueFromChild:(struct __AXUIElement { } *)a0;
- (id)initWithParent:(struct __AXUIElement { } *)a0 child:(struct __AXUIElement { } *)a1;
- (struct __AXUIElement { } *)resolveFromContainer:(struct __AXUIElement { } *)a0;

@end
