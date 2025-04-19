@class NSString, ABCardViewPersonMapper;
@protocol ABCardViewProperty;

@interface ABCardViewCNLabeledValueConverter : NSObject <ABCardViewMultiValueConverter>

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (retain, nonatomic) id<ABCardViewProperty> property;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addLabeledValue:(id)a0 toMultiValue:(id)a1;
- (void)addSuggestedLabeledValue:(id)a0 toMultiValue:(id)a1;
- (id)initWithPersonMapper:(id)a0 property:(id)a1;
- (id)multiValueFromValue:(id)a0;
- (void)setPropertiesOnMultiValue:(id)a0;
- (id)valueFromMultiValue:(id)a0;

@end
