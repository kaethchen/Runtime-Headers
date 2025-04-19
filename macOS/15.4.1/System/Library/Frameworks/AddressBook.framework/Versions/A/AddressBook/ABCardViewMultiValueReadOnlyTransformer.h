@class NSString, ABCardViewPersonMapper;

@interface ABCardViewMultiValueReadOnlyTransformer : NSObject <ABCardViewMultiValueTransformer>

@property (retain, nonatomic) ABCardViewPersonMapper *personMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)accountPermissionsMultiValue:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)demuxEntryAtIndex:(unsigned long long)a0 forMultiValue:(id)a1;
- (id)initWithPersonMapper:(id)a0;
- (id)readOnlyPersonIdentifiers:(id)a0;
- (id)reverseTransformMultiValue:(id)a0;
- (id)transformMultiValue:(id)a0;
- (id)writablePersonIdentifiers:(id)a0;

@end
