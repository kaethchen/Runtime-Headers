@class NSURL, PFAppleArchiveLogger;

@interface PLAppleArchiveLoggerRecord : NSObject

@property int refCount;
@property unsigned long long autoFlushCounter;
@property (readonly) NSURL *url;
@property (readonly) PFAppleArchiveLogger *logger;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 logger:(id)a1;

@end
