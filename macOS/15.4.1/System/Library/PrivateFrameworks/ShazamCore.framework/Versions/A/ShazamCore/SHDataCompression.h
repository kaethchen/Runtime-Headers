@class NSString;
@protocol SHDataStream;

@interface SHDataCompression : NSObject <SHDataStream>

@property (readonly) struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } stream;
@property int operation;
@property int algorithm;
@property (retain) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)supportedCompressionTypeFromFilePathExtension:(id)a0;
+ (int)supportedCompressionTypeFromFileURL:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setup;
- (BOOL)closeWithError:(id *)a0;
- (id)initForCompressionWithAlgorithm:(int)a0;
- (id)initForDecompressionWithAlgorithm:(int)a0;
- (id)initWithOperation:(int)a0 algorithm:(int)a1;
- (BOOL)performOperation:(int)a0 withData:(id)a1 algorithm:(int)a2 flags:(int)a3 error:(id *)a4;
- (BOOL)processData:(id)a0 error:(id *)a1;

@end
