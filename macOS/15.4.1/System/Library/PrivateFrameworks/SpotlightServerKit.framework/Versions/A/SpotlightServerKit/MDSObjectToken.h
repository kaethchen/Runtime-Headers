@class NSObject;
@protocol OS_dispatch_queue;

@interface MDSObjectToken : MDSToken {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned int)machPort;
- (id)initWithQueue:(id)a0;

@end
