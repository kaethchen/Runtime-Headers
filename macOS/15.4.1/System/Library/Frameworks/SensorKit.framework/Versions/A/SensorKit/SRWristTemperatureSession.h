@class NSEnumerator, NSString, NSMeasurement, NSData, NSDate, HAWristTemperatureSession;

@interface SRWristTemperatureSession : NSObject <SRSampleExporting, SRSampling, NSCopying, NSSecureCoding> {
    HAWristTemperatureSession *_healthwristTemperatureSession;
    NSData *_dataRepresentation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float a0CorrectionCoefficient;
@property (readonly, nonatomic) float c0CorrectionCoefficient;
@property (readonly, nonatomic) NSMeasurement *meanQuiescentPower;
@property (readonly, nonatomic) NSMeasurement *standardDeviationQuiescentPower;
@property (readonly, nonatomic, getter=isPublishable) BOOL publishable;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSEnumerator *temperatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSession:(id)a0;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;

@end
