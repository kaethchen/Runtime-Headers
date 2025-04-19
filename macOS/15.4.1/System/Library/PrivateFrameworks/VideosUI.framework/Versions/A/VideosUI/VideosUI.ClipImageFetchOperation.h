@interface VideosUI.ClipImageFetchOperation : VUIAsynchronousOperation {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ result;
    void /* unknown type, empty encoding */ completions;
    void /* unknown type, empty encoding */ imageProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;

@end
