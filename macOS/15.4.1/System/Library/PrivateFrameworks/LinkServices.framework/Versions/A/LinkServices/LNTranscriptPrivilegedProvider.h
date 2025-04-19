@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider

+ (id)xpcInterface;

- (id)transcriptPublisherWithStreamName:(id)a0 fromDate:(id)a1 toDate:(id)a2 maxEvents:(id)a3 reversed:(BOOL)a4 error:(id *)a5;
- (id)transcriptPublisherWithStreamName:(id)a0 fromDate:(id)a1 error:(id *)a2;
- (void)donateActionRecordData:(id)a0 bundleIdentifier:(id)a1 timestamp:(double)a2 writeImmediately:(BOOL)a3 reply:(id /* block */)a4;

@end
