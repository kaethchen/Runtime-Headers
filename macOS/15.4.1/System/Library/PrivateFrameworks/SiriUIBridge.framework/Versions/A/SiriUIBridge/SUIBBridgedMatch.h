@interface SUIBBridgedMatch : NSObject {
    void /* unknown type, empty encoding */ match;
    void /* unknown type, empty encoding */ originalString;
    void /* unknown type, empty encoding */ captureReference;
}

- (id)init;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)captured;

@end
