@class NSString, NSMutableData;

@interface SGChatLengthEstimator : NSObject {
    int _fd;
    NSMutableData *_backingData;
    unsigned short *_countPtr;
    char *_sketch;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly) NSString *path;
@property (readonly) unsigned long long count;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)initInMemory;
- (unsigned long long)estimateMessagesInChat:(id)a0;
- (void)recordMessageInChat:(id)a0;

@end
