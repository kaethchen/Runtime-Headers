@class NSColor, LPSize;

@interface LPVideoPlayButtonStyle : NSObject

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) LPSize *backgroundSize;
@property (nonatomic) double disabledOpacity;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0;

@end
