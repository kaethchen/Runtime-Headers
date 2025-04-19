@class NSArray, NSView, NSString, WKTextFinderClient;

@interface WKTextFinderMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch> {
    WKTextFinderClient *_client;
    NSView *_view;
    struct RetainPtr<NSArray> { void *m_ptr; } _rects;
    unsigned int _index;
}

@property (readonly, nonatomic) unsigned int index;
@property (readonly, retain, nonatomic) NSView *containingView;
@property (readonly, retain, nonatomic) NSArray *textRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
