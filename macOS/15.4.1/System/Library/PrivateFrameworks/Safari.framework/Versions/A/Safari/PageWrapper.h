@interface PageWrapper : NSObject {
    struct Page { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _page;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;

@end
