@interface PMMPredictionNotification : NSObject {
    id _notificationToken;
}

+ (void)postPredictionUpdate:(id)a0 consumer:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPredictionUpdateListener:(id /* block */)a0;

@end
