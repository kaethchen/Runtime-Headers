@class NSString;

@interface BWStillImageSmartStyle : NSObject <IBPSmartStyleProperties>

@property (copy, nonatomic) NSString *cast;
@property (nonatomic) float intensity;
@property (nonatomic) float toneBias;
@property (nonatomic) float colorBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSmartStyle:(id)a0;

@end
