@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (void)writeData:(id)a0;

@end
