@interface PGDisplayMode : NSObject {
    double _refreshRateInHz;
    BOOL _supportsEDR;
    BOOL _supports10bpc;
}

@property (nonatomic) BOOL supportsEDR;
@property (nonatomic) BOOL supports10bpc;
@property (readonly, nonatomic) struct { unsigned short x; unsigned short y; } sizeInPixels;
@property (readonly, nonatomic) double refreshRate;

- (id)initWithSizeInPixels:(struct { unsigned short x0; unsigned short x1; })a0 refreshRateInHz:(double)a1;

@end
