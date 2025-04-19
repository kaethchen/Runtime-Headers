@class NSDictionary, NSLayoutManager;

@interface NSToolTipStringDrawingLayoutManager : NSObject {
    NSLayoutManager *_layoutManager;
}

@property (readonly, retain) NSDictionary *wrappingAttributes;

+ (id)sharedToolTipStringDrawingLayoutManager;
+ (struct CGSize { double x0; double x1; })sizeForDisplayingAttributedString:(id *)a0;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })_sizeWithSize:(struct CGSize { double x0; double x1; })a0 attributedString:(id *)a1;
- (id)_wrappingAttributes;

@end
