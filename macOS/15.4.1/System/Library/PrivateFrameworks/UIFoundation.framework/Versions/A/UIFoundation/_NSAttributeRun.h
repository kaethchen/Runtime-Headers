@class NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSMutableArray *_attributesArray;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)restoreAttributesOfTextStorage:(id)a0;
- (id)initWithTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
