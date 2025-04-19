@class NSData;

@interface IPARenderedImageData : NSObject {
    unsigned long long _histogramA[256];
    unsigned long long _histogramR[256];
    unsigned long long _histogramG[256];
    unsigned long long _histogramB[256];
    unsigned long long *_histograms[4];
}

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long rowBytes;
@property (retain, nonatomic) NSData *rasterData;
@property (nonatomic) BOOL histogramCalculated;

- (void).cxx_destruct;
- (long long)histogramBucketCount;
- (BOOL)computeHistogram;
- (unsigned long long *)histogramBlue;
- (unsigned long long *)histogramGreen;
- (unsigned long long *)histogramRed;
- (id)initWithWidth:(long long)a0 height:(long long)a1 rowBytes:(long long)a2 rasterData:(id)a3;

@end
