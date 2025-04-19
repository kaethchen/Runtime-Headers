@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader>

@property (retain, nonatomic) NSURL *src;
@property (retain, nonatomic) NSFileHandle *file;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readData;

@end
