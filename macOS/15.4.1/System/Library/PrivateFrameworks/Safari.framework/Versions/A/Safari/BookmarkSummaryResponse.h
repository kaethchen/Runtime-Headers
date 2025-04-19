@class NSString, NSImage, NSURL, ReadingListFetcherInfo;

@interface BookmarkSummaryResponse : WBSSiteMetadataResponse {
    ReadingListFetcherInfo *_readingListFetcherInfo;
}

@property (readonly, nonatomic) int pageFetchResult;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *previewText;
@property (readonly, copy, nonatomic) NSString *siteName;
@property (readonly, nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (readonly, nonatomic) NSURL *mainImageURL;
@property (readonly, nonatomic) NSImage *mainImage;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 readingListFetcherInfo:(id)a1 pageFetchResult:(int)a2;

@end
