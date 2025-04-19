@class NSString, NSURL;

@interface SYDocumentFetchResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *documentId;
@property (readonly, nonatomic) NSURL *fileURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDocumentId:(id)a0 fileURL:(id)a1;

@end
