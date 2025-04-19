@interface CMCaptureUserNotification : NSObject

+ (id)notificationWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2 error:(id *)a3;

- (id)cancel;
- (id)initForSubclass;
- (void)asyncResponse:(id)a0 block:(id /* block */)a1;
- (unsigned long long)receiveResponseWithTimeout:(double)a0 error:(id *)a1;
- (id)updateWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2;

@end
