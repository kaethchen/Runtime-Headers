@class NSString, NSArray, TPSContextualCondition;

@interface TPSContextualInfo : TPSSerializableObject

@property (nonatomic) long long lastModifiedDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *usageEvents;
@property (copy, nonatomic) TPSContextualCondition *triggerCondition;
@property (copy, nonatomic) TPSContextualCondition *desiredOutcomeCondition;
@property (readonly, nonatomic) int priority;

+ (BOOL)supportsSecureCoding;
+ (id)contentDictionaryWithTipDeliveryInfoId:(id)a0 deliveryInfoMap:(id)a1;
+ (void)eventsInfoArrayForContextualInfoDictionary:(id)a0 triggerEvents:(id *)a1 desiredOutcomeEvents:(id *)a2;
+ (id)identifierFromDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)_lastModifiedDateFromDictionary:(id)a0;
- (id)conditionForType:(unsigned long long)a0;
- (id)desiredOutcomeEventIdentifiers;
- (BOOL)hasChangesFromDictionary:(id)a0;
- (void)restartDesiredOutcomeTracking;
- (void)restartTriggerTracking;
- (id)triggerEventIdentifiers;

@end
