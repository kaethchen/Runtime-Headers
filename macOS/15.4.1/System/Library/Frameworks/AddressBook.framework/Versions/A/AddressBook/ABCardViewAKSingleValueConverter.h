@class NSString, CNContact;
@protocol ABCardViewProperty;

@interface ABCardViewAKSingleValueConverter : NSObject <ABCardViewMultiValueConverter>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<ABCardViewProperty> property;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contacts;
- (void)addValueFrom:(id)a0 toMultiValue:(id)a1;
- (BOOL)doesMultiValue:(id)a0 containValueSuperiorTo:(id)a1;
- (id)identifiersOfPeopleWithValue:(id)a0;
- (unsigned long long)indexOfEquivalentValueInferiorToValue:(id)a0 inMultiValue:(id)a1;
- (id)initWithContact:(id)a0 property:(id)a1;
- (id)multiValueFromValue:(id)a0;
- (void)setPropertiesOnMultiValue:(id)a0;
- (id)valueFromMultiValue:(id)a0;

@end
