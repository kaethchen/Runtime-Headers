@class NSURL, NSMutableArray, NSOutputStream;

@interface IMMultiFrameImage : NSObject

@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) float scale;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSMutableArray *durations;

- (void).cxx_destruct;
- (void)deleteStream;
- (BOOL)finalizeASTCWithError:(id *)a0;
- (BOOL)finalizeOptimizedBitmapWithError:(id *)a0;
- (id)initForWritingWithFileURL:(id)a0 scale:(float)a1;
- (BOOL)writeASTCImage:(struct CGImage { } *)a0 duration:(double)a1 error:(id *)a2;
- (BOOL)writeAsOptimizedBitmapWithImage:(struct CGImage { } *)a0 duration:(double)a1 error:(id *)a2;

@end
