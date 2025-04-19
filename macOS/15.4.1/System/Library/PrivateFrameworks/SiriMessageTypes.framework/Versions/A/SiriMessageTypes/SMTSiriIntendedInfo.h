@class NSNumber;

@interface SMTSiriIntendedInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float odldScore;
@property (readonly, nonatomic) float aftmScore;
@property (readonly, nonatomic) float spkrIdScore;
@property (readonly, nonatomic) float lrnnScore;
@property (readonly, nonatomic) float checkerScore;
@property (readonly, copy, nonatomic) NSNumber *invocationType;
@property (readonly, nonatomic) float lrnnThreshold;
@property (readonly, nonatomic) float lrnnScale;
@property (readonly, nonatomic) float lrnnOffset;
@property (readonly, nonatomic) BOOL isGazeSignalPresent;
@property (readonly, nonatomic) float conversationalOdldScore;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8 conversationalOdldScore:(float)a9;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8 gazeSignal:(BOOL)a9;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8 isGazeSignalPresent:(float)a9 conversationalOdldScore:(float)a10;

@end
