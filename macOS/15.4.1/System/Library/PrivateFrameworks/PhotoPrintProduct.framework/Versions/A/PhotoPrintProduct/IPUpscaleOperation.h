@class NSString;

@interface IPUpscaleOperation : NSOperation {
    char *startPixel1;
    char *startPixel2;
    unsigned long long rowBytes1;
    unsigned long long rowBytes2;
    unsigned long long width1;
    unsigned long long height1;
    unsigned long long width2;
    unsigned long long height2;
    unsigned long long extraStartRows;
    unsigned long long extraEndRows;
    NSString *descript;
    double scale;
}

- (void)dealloc;
- (id)init;
- (id)initWithString:(id)a0;
- (void)main;
- (id)initWithStartPixel:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 description:(id)a3 rowBytes:(unsigned long long)a4 scale:(double)a5;
- (void)setTarget:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 rowBytes:(unsigned long long)a3 extraStartRows:(unsigned long long)a4 extraEndRows:(unsigned long long)a5;

@end
