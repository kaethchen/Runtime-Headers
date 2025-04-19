@class BMStoreStream;

@interface BMNotificationStream : NSObject {
    BMStoreStream *_storeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)source;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;

@end
