@class NSString, WebKitPreferencesManager;

@interface BookmarkSummaryFetchOperation : WBSSiteMetadataFetchOperation <FetcherDelegate> {
    id /* block */ _completionHandler;
    struct Context { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _context;
    WebKitPreferencesManager *_preferencesManager;
    struct unique_ptr<Safari::ReadingListFetcher, std::default_delete<Safari::ReadingListFetcher>> { struct __compressed_pair<Safari::ReadingListFetcher *, std::default_delete<Safari::ReadingListFetcher>> { struct ReadingListFetcher *__value_; } __ptr_; } _fetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (id)_bookmarkSummaryRequest;
- (void)_cleanUpAfterFetch;
- (void)_startOffscreenBookmarkSummaryRequest;
- (void)fetcher:(void *)a0 didFailFetchWithResult:(int)a1 forItem:(id)a2;
- (void)fetcher:(void *)a0 didSucceedFetchingInfo:(id)a1 forItem:(id)a2;
- (id)initWithRequest:(id)a0 processContext:(const void *)a1 preferencesManager:(id)a2 completionHandler:(id /* block */)a3;

@end
