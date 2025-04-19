@class NSString, ASDPropertyAddress, ASDTCustomProperty;
@protocol ASDTNumericProperty;

@interface ASDTPMActionNumericPropertyAnalyticsEvent : ASDTPMActionAnalyticsEvent

@property (weak, nonatomic) ASDTCustomProperty<ASDTNumericProperty> *numericProperty;
@property (retain, nonatomic) ASDPropertyAddress *propertyAddress;
@property (retain, nonatomic) NSString *fieldName;

- (void).cxx_destruct;
- (id)deviceName;
- (id)eventData;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end
