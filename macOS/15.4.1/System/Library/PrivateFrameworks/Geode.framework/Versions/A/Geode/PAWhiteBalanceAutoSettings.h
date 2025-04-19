@class NSColor;

@interface PAWhiteBalanceAutoSettings : IPAAutoSettings

@property (nonatomic) long long colorType;
@property (nonatomic) BOOL useFace;
@property (nonatomic) float faceI;
@property (nonatomic) float faceQ;
@property (nonatomic) float faceStrength;
@property (nonatomic) double faceWarmth;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (retain, nonatomic) NSColor *grayColor;
@property (nonatomic) double grayWarmth;

- (void).cxx_destruct;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
