@class NSString, PDFAccessibilityNodeAnnotation;

@interface PDFAccessibilityNodeLink : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;
@property (retain, nonatomic) PDFAccessibilityNodeAnnotation *linkAnnotationNode;

- (void).cxx_destruct;
- (id)stringValue;
- (void)addChild:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;

@end
