@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicates;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)predicateForForegroundApp;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForNextAlarm;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)plistDictionary;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)initWithPlistDictionary:(id)a0;

@end
