@class NSData;

@interface PASmartToneAutoSettings : IPAAutoSettings

@property (nonatomic) double tonalRange;
@property (nonatomic) double highKey;
@property (nonatomic) double p02;
@property (nonatomic) double p10;
@property (nonatomic) double p25;
@property (nonatomic) double p50;
@property (nonatomic) double p98;
@property (nonatomic) double autoValue;
@property (nonatomic) double blackPoint;
@property (nonatomic) double whitePoint;
@property (nonatomic) double localAutoValue;
@property (retain, nonatomic) NSData *lightMap;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
