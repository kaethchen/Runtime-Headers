@class NSString;

@interface NSFontOptionsAttributeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) Class allowedClass;

+ (id)attributeDescriptorWithName:(id)a0 allowedClass:(Class)a1;

- (void)dealloc;
- (id)initWithName:(id)a0 allowedClass:(Class)a1;

@end
