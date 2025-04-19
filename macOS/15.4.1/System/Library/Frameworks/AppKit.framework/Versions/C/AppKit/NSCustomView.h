@class NSString, NSView;

@interface NSCustomView : NSView {
    NSString *className;
    NSView *view;
    id extension;
    unsigned char hasEncodedClipsToBounds : 1;
}

@property (copy) NSString *className;

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_descendantIsConstrainedByConstraint:(id)a0;
- (void)_setAsClipViewDocumentViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)nibInstantiateWithObjectInstantiator:(id)a0;

@end
