@class NSString, CADisplayMode;

@interface CADisplayProperties : NSObject {
    unsigned int _mask;
    CADisplayMode *_currentMode;
    NSString *_overscanAdjustment;
    BOOL _dmrrEnabled;
    unsigned int _connectionSeed;
    struct CGSize { double width; double height; } _logicalScale;
    unsigned int _pointScale;
    BOOL _forceFixedRateLinks;
}

@property (nonatomic) unsigned int updateMask;
@property (nonatomic) BOOL dmrrEnabled;
@property (nonatomic) BOOL forceFixedRateLinks;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (nonatomic) struct CGSize { double x0; double x1; } logicalScale;
@property (nonatomic) unsigned long long pointScale;
@property (nonatomic) unsigned int connectionSeed;

- (void)dealloc;
- (id)init;
- (void)clearUpdateMask;
- (BOOL)needsUpdateForField:(unsigned int)a0;

@end
