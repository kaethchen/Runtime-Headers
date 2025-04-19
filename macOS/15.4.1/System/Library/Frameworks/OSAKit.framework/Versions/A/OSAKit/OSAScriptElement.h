@class NSMutableArray, NSString;

@interface OSAScriptElement : NSObject <NSCoding> {
    OSAScriptElement *_superElement;
    NSMutableArray *_subElements;
    NSString *_text;
    NSString *_remainingText;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct _NSRange { unsigned long long location; unsigned long long length; } _nameRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lineRange;
}

+ (id)element;
+ (id)elementWithSuperElement:(id)a0;
+ (id)elementWithText:(id)a0;
+ (id)elementWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)dealloc;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (unsigned long long)level;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)title;
- (id)text;
- (void)addElement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lineRange;
- (void)setText:(id)a0;
- (void)removeElement:(id)a0;
- (id)initWithText:(id)a0;
- (void)removeAllElements;
- (id)remainingText;
- (void)setNameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)previousElement;
- (void)setSubElements:(id)a0;
- (id)elementWithKindOfClass:(Class)a0 andName:(id)a1;
- (id)previousElementWithKindOfClass:(Class)a0;
- (void)addElement:(id)a0 afterElement:(id)a1;
- (void)addElement:(id)a0 beforeElement:(id)a1;
- (void)addIndents:(unsigned long long)a0 intoText:(id)a1;
- (id)elementsWithKindOfClass:(Class)a0;
- (id)elementsWithMemberOfClass:(Class)a0;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned long long)a1;
- (BOOL)generateSubElementsIntoText:(id)a0 indent:(unsigned long long)a1;
- (id)initWithSuperElement:(id)a0;
- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lineRangeOfSubElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nameRange;
- (id)nextElement;
- (id)nextElementWithKindOfClass:(Class)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSubElements;
- (void)setLineRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setRemainingText:(id)a0;
- (void)setSuperElement:(id)a0;
- (id)subElements;
- (id)superElement;

@end
