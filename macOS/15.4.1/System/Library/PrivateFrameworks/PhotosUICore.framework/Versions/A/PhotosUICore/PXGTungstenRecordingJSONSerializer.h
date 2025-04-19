@interface PXGTungstenRecordingJSONSerializer : NSObject <PXGTungstenRecordingSerializer> {
    unsigned long long _eventCount;
}

@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL prettyPrint;
@property (nonatomic) BOOL sortKeys;

- (void)recordingSessionWillEndToStream:(id)a0;
- (void)recordingSessionWillStartToStream:(id)a0;
- (void)serializeEvent:(id)a0 toStream:(id)a1;

@end
