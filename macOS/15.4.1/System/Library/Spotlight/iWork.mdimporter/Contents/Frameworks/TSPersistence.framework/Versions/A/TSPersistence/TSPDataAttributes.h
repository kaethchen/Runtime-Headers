@interface TSPDataAttributes : NSObject <NSCopying>

+ (void)registerDataAttributesClass:(Class)a0 forExtensionNumber:(int)a1;
+ (id)_classRegistry;
+ (id)newDataAttributesWithMessage:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(const void *)a0;
- (void)saveToMessage:(void *)a0;

@end
