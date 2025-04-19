@class NSColor;

@interface _VUIMonogramDecorator : VUIImageScaleDecorator

@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (BOOL)needsAlphaForImage:(id)a0;

@end
