@class NSString, NSURL, NSData, NSDate;

@interface SHDataFetcherFileInfo : NSObject

@property (readonly) NSURL *dataFilePathURL;
@property (readonly) NSData *data;
@property (readonly, copy) NSString *suggestedFileName;
@property (readonly, copy) NSString *suggestedExtension;
@property (readonly) int compressionType;
@property (retain) NSDate *creationDate;
@property (copy) NSString *storefront;
@property (copy) NSString *uniqueHash;
@property (copy) NSString *mimeType;

+ (id)dataFetcherForSourceURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 suggestedFileName:(id)a1;
- (id)initWithDataURL:(id)a0;
- (id)initWithDataURL:(id)a0 suggestedFileName:(id)a1;

@end
