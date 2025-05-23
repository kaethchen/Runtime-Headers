@class NSString;

@interface KNAnimationRandomGenerator : NSObject <TSDAnimationRandomGenerator> {
    struct TSCERandGenerator { struct TSCECellRandSeed { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } x0; unsigned char x1[20]; unsigned char x2[20]; unsigned int x3; } x1; } *_randGenerator;
}

@property (nonatomic) unsigned long long seed;
@property (readonly, nonatomic) double randomDouble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomGeneratorWithSeed:(id)a0;
+ (unsigned int)generateNewSeed;
+ (void)configureFromUserDefaults;
+ (id)randomGeneratorFromPluginContext:(id)a0;

@end
