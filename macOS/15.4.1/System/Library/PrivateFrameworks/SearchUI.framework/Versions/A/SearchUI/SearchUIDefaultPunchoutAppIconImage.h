@class NSURL, SearchUIImage;

@interface SearchUIDefaultPunchoutAppIconImage : SearchUIAppIconImage

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) SearchUIImage *wrappedImage;

+ (id)defaultRecordForURL:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)defaultApplicationFetchQueue;
- (id)initWithSFImage:(id)a0 variant:(unsigned long long)a1;
- (id)initWithURL:(id)a0 variant:(unsigned long long)a1;
- (void)loadRelatedAppIconImageForFileURL:(id)a0 scale:(double)a1 isDarkStyle:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
