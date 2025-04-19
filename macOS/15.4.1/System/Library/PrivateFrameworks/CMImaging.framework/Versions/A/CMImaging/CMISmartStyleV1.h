@class NSString;

@interface CMISmartStyleV1 : NSObject <CMISmartStyle>

@property (retain, nonatomic) NSString *castType;
@property (nonatomic) float castIntensity;
@property (nonatomic) float toneBias;
@property (nonatomic) float colorBias;
@property (readonly, nonatomic) unsigned int smartStyleVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCastType:(id)a0 castIntensity:(float)a1 toneBias:(float)a2 colorBias:(float)a3;

@end
