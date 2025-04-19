@class NSData, NSURL;

@interface _MLTMMappedFile : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
