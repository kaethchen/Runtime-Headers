@class NSColor;

@interface NSBoxAuxiliary : NSObject {
    double borderWidth;
    double cornerRadius;
}

@property (copy) NSColor *borderColor;
@property (copy) NSColor *fillColor;

- (void)dealloc;
- (id)init;

@end
