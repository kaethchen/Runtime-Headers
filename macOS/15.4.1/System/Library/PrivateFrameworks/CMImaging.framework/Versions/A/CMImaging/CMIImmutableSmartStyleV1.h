@class NSString;

@interface CMIImmutableSmartStyleV1 : NSObject <CMIImmutableSmartStyle>

@property (readonly, nonatomic) unsigned int smartStyleVersion;
@property (readonly, nonatomic) NSString *castType;
@property (readonly, nonatomic) float castIntensity;
@property (readonly, nonatomic) float toneBias;
@property (readonly, nonatomic) float colorBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithCastType:(id)a0 castIntensity:(float)a1 toneBias:(float)a2 colorBias:(float)a3;

@end
