@class NSColor;

@interface _NSAccessibilityHighlightTextInfo : NSObject

@property (retain) id element;
@property (copy) NSColor *color;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property long long style;
@property long long parsingType;

+ (id)attributedKeyForHighlightStyle:(long long)a0;

- (void)dealloc;
- (id)initWithElement:(id)a0 color:(id)a1 range:(id)a2 style:(id)a3 parsingType:(id)a4;

@end
