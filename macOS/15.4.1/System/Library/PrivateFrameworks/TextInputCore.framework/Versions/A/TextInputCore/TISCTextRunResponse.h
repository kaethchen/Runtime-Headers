@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {
    struct __CFArray { } *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont { } *_font;
}

+ (id)textRunResponseByMergingResponses:(id)a0;
+ (id)textRunResponseWithFont:(struct __CTFont { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct __CTFont { } *)font;
- (struct __CFArray { } *)ctLines;
- (id)widths;

@end
