@class NSURLQueueNode;

@interface NSURLQueue : NSObject {
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;

- (void)dealloc;
- (id)init;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (id)peekAt:(unsigned long long)a0;
- (BOOL)remove:(id)a0;
- (void)clear;
- (long long)indexOf:(id)a0;
- (id)peek;
- (void)put:(id)a0;
- (void)setWaitOnTake:(BOOL)a0;
- (id)take;
- (BOOL)waitOnTake;

@end
