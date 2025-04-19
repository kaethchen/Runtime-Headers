@class NSString, NSImage, NSURL, NSData;

@interface ReadingListFetcherInfo : NSObject

@property (nonatomic) struct URL { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } urlWK;
@property (nonatomic) struct String { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } titleWK;
@property (nonatomic) struct String { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } previewTextWK;
@property (nonatomic) struct String { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } siteNameWK;
@property (nonatomic) struct URL { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } mainImageURLWK;
@property (nonatomic) struct Image { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } mainImageWK;
@property (nonatomic) struct Data { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } webArchiveDataWK;
@property (nonatomic, getter=isReaderAvailableWK) struct Boolean { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } readerAvailableWK;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *previewText;
@property (readonly, nonatomic) NSString *siteName;
@property (readonly, nonatomic) NSURL *mainImageURL;
@property (readonly, nonatomic) NSImage *mainImage;
@property (readonly, nonatomic) NSData *webArchiveData;
@property (readonly, nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (readonly, nonatomic) struct Dictionary { struct WKRetainPtr<const void *> { void *x0; } x0; } dictionaryRepresentationWK;

- (void).cxx_destruct;
- (id)initWithDictionary:(struct Dictionary { struct WKRetainPtr<const void *> { void *x0; } x0; })a0;
- (id).cxx_construct;

@end
