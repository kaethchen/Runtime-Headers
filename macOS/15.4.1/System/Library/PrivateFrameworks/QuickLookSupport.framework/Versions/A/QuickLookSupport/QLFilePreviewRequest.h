@class NSURL, UTType;

@interface QLFilePreviewRequest : NSObject

@property (retain) UTType *contentType;
@property (readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 contentType:(id)a1;

@end
