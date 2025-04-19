@class OSLogEventStreamBase, OSLogEventStream;

@interface CSKLogarchiveLogEventStream : NSObject <CSKLogEventStream> {
    OSLogEventStream *_logEventStream;
}

@property (readonly, nonatomic) OSLogEventStreamBase *baseStream;

- (void).cxx_destruct;
- (void)activateStreamFromDate:(id)a0;
- (id)initWithLogEventStream:(id)a0;

@end
