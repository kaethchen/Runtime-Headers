@class NSString, WKDOMRange;

@interface DDHighlightObject : NSObject {
    struct __DDResult { } *_result;
}

@property (copy) NSString *webViewIdentifier;
@property (retain) WKDOMRange *range;
@property (retain) NSString *targetURL;
@property BOOL followedByBlank;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (struct __DDResult { } *)result;
- (void)setResult:(struct __DDResult { } *)a0;
- (id)localizedTypeForAccessibility;
- (void)setResult:(struct __DDResult { } *)a0 fromQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryFragment *x1; long long x2; long long x3; void /* function */ *x4; void *x5; } *)a1;

@end
