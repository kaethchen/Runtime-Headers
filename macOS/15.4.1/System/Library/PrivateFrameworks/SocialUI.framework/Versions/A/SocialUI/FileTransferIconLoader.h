@class NSOperationQueue;

@interface FileTransferIconLoader : NSObject {
    NSOperationQueue *_queue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelNotificationsForDelegate:(id)a0;
- (void)queueURL:(id)a0 forSize:(double)a1 withDelegate:(id)a2;

@end
