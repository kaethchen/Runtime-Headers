@class NSOutputStream;

@interface AnalyticsCSVWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (void)finishLine;
- (void)writeComma;
- (void)writeField:(id)a0;
- (void)writeFields:(id)a0;

@end
