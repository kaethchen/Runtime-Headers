@class NUVersion, NSDictionary, NSData, NSString, NSNumber;

@interface _NUSemanticStyleProperties : NSObject <NUSemanticStyleProperties>

@property (retain, nonatomic) NUVersion *version;
@property (copy, nonatomic) NSData *styleData;
@property (nonatomic) BOOL styleDataIsFloat16;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } keyTime;
@property (copy, nonatomic) NSData *globalToneCurveData;
@property (nonatomic) double baselineExposure;
@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSNumber *subjectRelightingValue;
@property (copy, nonatomic) NSDictionary *stats;
@property (copy, nonatomic) NSData *lightMapData;
@property (copy, nonatomic) NSData *linearLightMapData;
@property (retain, nonatomic) NSNumber *lightMapWidth;
@property (retain, nonatomic) NSNumber *lightMapHeight;
@property (retain, nonatomic) NSNumber *baseGain;
@property (retain, nonatomic) NSNumber *linearGain;
@property (retain, nonatomic) NSNumber *linearRangeMin;
@property (retain, nonatomic) NSNumber *linearRangeMax;
@property (retain, nonatomic) NSNumber *faceBasedGlobalExposureBoostRatio;
@property (copy, nonatomic) NSDictionary *extendedStats;
@property (retain, nonatomic) NSNumber *tuningType;
@property (retain, nonatomic) NSNumber *brightness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baselineExposureFromLegacyMetadata:(id)a0 error:(out id *)a1;
+ (id)globalToneCurveDataFromCaptureMetadata:(id)a0 error:(out id *)a1;
+ (id)legacySemanticStylePropertiesFromData:(id)a0 fromVideo:(BOOL)a1 keyTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(out id *)a3;
+ (id)semanticStylePropertiesFromData:(id)a0 fromVideo:(BOOL)a1 keyTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(out id *)a3;
+ (id)semanticStylePropertiesFromImageMetadata:(id)a0 error:(out id *)a1;
+ (id)semanticStylePropertiesFromVideoMetadata:(id)a0 keyTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(out id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
