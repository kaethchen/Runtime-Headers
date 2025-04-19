@class NSString, NSArray;

@interface WKTextExtractionTextItem : WKTextExtractionItem {
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ links;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ selectedRange;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ editable;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 links:(id)a2 editable:(id)a3 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 children:(id)a5;

@end
