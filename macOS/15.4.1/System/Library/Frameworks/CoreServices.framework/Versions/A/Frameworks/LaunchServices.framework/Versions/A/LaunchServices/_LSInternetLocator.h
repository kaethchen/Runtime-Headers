@class NSURL;

@interface _LSInternetLocator : NSObject

@property (readonly, nonatomic) NSURL *targetURL;

+ (id)new;
+ (BOOL)isURLAnInternetLocator:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithTargetURL:(id)a0;
- (BOOL)writeToURL:(id)a0 dataWritingOptions:(unsigned long long)a1 error:(id *)a2;

@end
