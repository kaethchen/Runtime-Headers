@class OSLogEventStreamBase, OSLogDeserializedEventStream;

@interface CSKKtraceLogEventStream : NSObject <CSKLogEventStream> {
    OSLogDeserializedEventStream *_deserializedEventStream;
    struct ktrace_file { } *_ktraceFile;
}

@property (readonly, nonatomic) OSLogEventStreamBase *baseStream;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activateStreamFromDate:(id)a0;
- (id)initWithDeserializedEventStream:(id)a0 ktraceFile:(struct ktrace_file { } *)a1;

@end
