@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)appendString:(id)a0;
- (void)close;
- (id)initWithOutputStream:(id)a0;

@end
