@class NSDateFormatter, NSTimer, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface SessionRecorder : NSObject {
    NSTimer *_timer;
    NSDateFormatter *_dateFormatter;
    unsigned long long _lastHashOfDOM;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    unsigned long long _eventCounter;
    NSURL *_outputURL;
}

- (void).cxx_destruct;
- (void)_recordWebArchiveSnapshot:(id)a0;

@end
