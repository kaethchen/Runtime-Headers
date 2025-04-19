@class NSURL, NSData, NSString;

@interface __NSTemporaryFileURL : NSObject {
    NSData *_data;
    NSString *_filename;
    NSURL *_url;
}

@property (readonly) NSURL *url;

- (void)dealloc;
- (id)url;
- (id)initWithData:(id)a0 filename:(id)a1;

@end
