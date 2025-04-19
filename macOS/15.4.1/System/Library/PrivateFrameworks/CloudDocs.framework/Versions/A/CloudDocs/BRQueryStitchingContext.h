@class BRQuery, BRNotificationReceiver;

@interface BRQueryStitchingContext : NSObject {
    BRQuery *_query;
    BRNotificationReceiver *_receiver;
}

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)performAsyncOnReceiver:(id /* block */)a0;

@end
