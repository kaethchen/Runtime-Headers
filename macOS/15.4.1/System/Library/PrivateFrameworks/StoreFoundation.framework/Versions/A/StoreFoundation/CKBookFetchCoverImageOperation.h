@class NSImage, CKBook;

@interface CKBookFetchCoverImageOperation : ISOperation

@property (readonly) CKBook *book;
@property (readonly) NSImage *coverImage;

- (void)run;
- (void).cxx_destruct;
- (id)_downloadCoverImageFromURL:(id)a0 returningError:(id *)a1;
- (id)initWithBook:(id)a0 storeClient:(id)a1;

@end
