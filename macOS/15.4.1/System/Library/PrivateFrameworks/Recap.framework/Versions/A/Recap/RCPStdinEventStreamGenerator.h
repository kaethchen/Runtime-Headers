@class NSMutableString, NSMutableArray, NSInputStream;

@interface RCPStdinEventStreamGenerator : NSObject {
    NSInputStream *_stdin;
    NSMutableArray *_commandBuffer;
    NSMutableString *_stringBuffer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)nextEventStream;
- (BOOL)_processBuffer;

@end
