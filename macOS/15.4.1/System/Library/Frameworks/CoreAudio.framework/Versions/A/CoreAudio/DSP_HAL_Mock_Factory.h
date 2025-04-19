@class NSString, DSP_HAL_Mock_PropertySet;

@interface DSP_HAL_Mock_Factory : NSObject <HAL_DSP_Factory>

@property (nonatomic) int featureFlag;
@property (retain, nonatomic) DSP_HAL_Mock_PropertySet *libraryProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createProcessor:(id)a0 withHost:(id)a1;
- (id)getFactoryPropertySet;

@end
