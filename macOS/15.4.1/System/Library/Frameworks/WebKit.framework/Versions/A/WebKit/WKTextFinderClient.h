@class NSView;

@interface WKTextFinderClient : NSObject {
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _page;
    NSView *_view;
    struct Deque<WTF::Function<void (NSArray *, bool)>, 0UL> { unsigned long long m_start; unsigned long long m_end; struct VectorBuffer<WTF::Function<void (NSArray *, bool)>, 0UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_buffer; } _findReplyCallbacks;
    struct Deque<WTF::Function<void (NSImage *)>, 0UL> { unsigned long long m_start; unsigned long long m_end; struct VectorBuffer<WTF::Function<void (NSImage *)>, 0UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_buffer; } _imageReplyCallbacks;
    BOOL _usePlatformFindUI;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)findMatchesForString:(id)a0 relativeToMatch:(id)a1 findOptions:(unsigned long long)a2 maxResults:(unsigned long long)a3 resultCollector:(id /* block */)a4;
- (void)getSelectedText:(id /* block */)a0;
- (void)replaceMatches:(id)a0 withString:(id)a1 inSelectionOnly:(BOOL)a2 resultCollector:(id /* block */)a3;
- (void)scrollFindMatchToVisible:(id)a0;
- (void)selectFindMatch:(id)a0 completionHandler:(id /* block */)a1;
- (void)didFindStringMatchesWithRects:(const void *)a0 didWrapAround:(BOOL)a1;
- (void)didGetImageForMatchResult:(void *)a0;
- (void)getImageForMatchResult:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPage:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0 view:(id)a1 usePlatformFindUI:(BOOL)a2;
- (void)willDestroyView:(id)a0;

@end
