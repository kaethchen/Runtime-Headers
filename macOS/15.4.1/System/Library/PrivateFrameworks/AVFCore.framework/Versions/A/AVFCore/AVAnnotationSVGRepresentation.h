@class NSString;

@interface AVAnnotationSVGRepresentation : AVAnnotationRepresentation

@property (copy, nonatomic) NSString *svg;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithSVG:(id)a0;

@end
