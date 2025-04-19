@class NSNumber;

@interface ULServiceMetaInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *numberOfClustersLearnedInModel;
@property (retain, nonatomic) NSNumber *numberOfRecordingTriggersAtCurrentLocationOfInterest;
@property (retain, nonatomic) NSNumber *numberOfInputValidFingerprints;
@property (retain, nonatomic) NSNumber *numberOfInputValidFingerprintsLabeled;
@property (retain, nonatomic) NSNumber *numberOfInputValidFingerprintsUnLabeled;
@property (retain, nonatomic) NSNumber *numberOfFingerprintsBeforePruning;
@property (retain, nonatomic) NSNumber *numberOfFingerprintsAfterPruning;
@property (retain, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (retain, nonatomic) NSNumber *numberOfBLESources;
@property (retain, nonatomic) NSNumber *numberOfUWBSources;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumClustersLearnedInModel:(id)a0 numRecordingTriggersAtCurrentLOI:(id)a1 numInputValidFingerprints:(id)a2 numInputValidFingerprintsLabeled:(id)a3 numInputValidFingerprintsUnlabeled:(id)a4 numFingerprintsBeforePruning:(id)a5 numFingerprintsAfterPruning:(id)a6 numWiFiAccessPoints:(id)a7 numBLESources:(id)a8 numUWBSources:(id)a9;

@end
