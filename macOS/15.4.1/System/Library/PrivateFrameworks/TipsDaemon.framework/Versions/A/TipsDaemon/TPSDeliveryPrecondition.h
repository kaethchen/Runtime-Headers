@class NSArray, NSString;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) long long statusType;
@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSArray *conditions;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)conditionsForType:(long long)a0;
- (id)registrableEvents;

@end
