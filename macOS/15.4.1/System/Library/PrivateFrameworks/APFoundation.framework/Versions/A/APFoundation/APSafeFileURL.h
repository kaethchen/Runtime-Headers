@class NSString;

@interface APSafeFileURL : NSURL

@property (copy, nonatomic) NSString *safeDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)URLByAppendingPathComponent:(id)a0;
- (id)initFileURLWithPath:(id)a0 relativeToURL:(id)a1;

@end
