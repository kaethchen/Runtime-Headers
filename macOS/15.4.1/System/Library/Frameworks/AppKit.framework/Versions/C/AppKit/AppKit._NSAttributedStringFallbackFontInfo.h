@interface AppKit._NSAttributedStringFallbackFontInfo : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ multipleFontsInSelectedRange;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ firstFont;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ firstDocumentFont;
@property (nonatomic, readonly) BOOL firstFontIsFallback;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMultipleFontsInSelectedRange:(BOOL)a0 firstFont:(const struct __CTFont { } *)a1 firstDocumentFont:(const struct __CTFont { } *)a2;

@end
