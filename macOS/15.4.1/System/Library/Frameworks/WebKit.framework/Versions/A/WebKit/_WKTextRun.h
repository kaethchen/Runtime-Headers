@class NSString;

@interface _WKTextRun : NSObject <WKObject> {
    struct ObjectStorage<API::TextRun> { struct type { unsigned char __lx[48]; } data; } _textRun;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectInWebView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
