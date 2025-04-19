@class PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long alternateMode;
@property (readonly, nonatomic) unsigned long long blendMode;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (readonly, nonatomic) PKInkParticleDescriptor *secondaryParticleDescriptor;

- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 blendMode:(unsigned long long)a1 alternateMode:(unsigned long long)a2 particleDescriptor:(id)a3 secondaryParticleDescriptor:(id)a4;

@end
