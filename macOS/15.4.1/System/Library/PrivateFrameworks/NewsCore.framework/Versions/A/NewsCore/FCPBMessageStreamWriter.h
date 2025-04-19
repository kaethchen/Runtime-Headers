@class NSOutputStream, PBDataWriter, NSURL, NSError;

@interface FCPBMessageStreamWriter : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) PBDataWriter *dataWriter;
@property (readonly, nonatomic) char *varIntBuffer;
@property (nonatomic) unsigned long long currentOffset;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)close:(id *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })writeMessage:(id)a0;
- (void)_open;
- (void)_openIfNeeded;
- (BOOL)_writeMessage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 error:(id *)a2;
- (BOOL)write:(id)a0 error:(id *)a1;

@end
