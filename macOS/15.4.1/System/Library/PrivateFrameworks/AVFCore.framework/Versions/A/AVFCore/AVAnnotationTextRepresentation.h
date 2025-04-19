@class NSString;

@interface AVAnnotationTextRepresentation : AVAnnotationRepresentation {
    struct CGColor { } *_backgroundColor;
    struct CGColor { } *_foregroundColor;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *font;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGColor { } *foregroundColor;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic) BOOL hasUnderline;
@property (nonatomic) long long writingMode;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithText:(id)a0 font:(id)a1;

@end
