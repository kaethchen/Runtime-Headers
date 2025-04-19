@interface IPMDFontRange_Legacy : NSObject {
    struct __CTFont { } *_font;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

+ (id)valueWithFont:(struct __CTFont { } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeValue;
- (struct __CTFont { } *)font;

@end
