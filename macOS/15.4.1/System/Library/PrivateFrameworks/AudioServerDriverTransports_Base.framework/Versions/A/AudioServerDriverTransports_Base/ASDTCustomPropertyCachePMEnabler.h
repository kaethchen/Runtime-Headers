@class ASDPropertyAddress, ASDTCustomProperty;

@interface ASDTCustomPropertyCachePMEnabler : ASDTPMEnabler

@property (weak, nonatomic) ASDTCustomProperty *property;
@property (retain, nonatomic) ASDPropertyAddress *propertyAddress;

- (void).cxx_destruct;
- (id)deviceName;
- (int)enable:(BOOL)a0;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end
