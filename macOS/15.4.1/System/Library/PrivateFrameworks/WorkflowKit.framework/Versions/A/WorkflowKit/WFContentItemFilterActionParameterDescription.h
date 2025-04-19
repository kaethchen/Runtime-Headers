@class NSString;

@interface WFContentItemFilterActionParameterDescription : NSObject <WFParameterLocalizedValue>

@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) unsigned long long field;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContentItemClass:(Class)a0 field:(unsigned long long)a1;
- (id)localizedStringWithContext:(id)a0 pluralizationNumber:(id)a1;

@end
