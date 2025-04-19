@interface DirectUserNotification : CMCaptureUserNotification {
    struct __CFUserNotification { } *_notification;
}

- (void)dealloc;
- (id)cancel;
- (void)asyncResponse:(id)a0 block:(id /* block */)a1;
- (id)initNotificationWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2 error:(id *)a3;
- (unsigned long long)receiveResponseWithTimeout:(double)a0 error:(id *)a1;
- (id)updateWithTimeout:(double)a0 flags:(unsigned long long)a1 dictionary:(id)a2;

@end
