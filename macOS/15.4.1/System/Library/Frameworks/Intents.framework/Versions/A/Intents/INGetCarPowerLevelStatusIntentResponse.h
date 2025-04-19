@class NSString, NSMeasurement, NSDictionary, NSDateComponents, NSNumber;

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (readonly) long long code;
@property (copy) NSString *carIdentifier;
@property (copy) NSNumber *fuelPercentRemaining;
@property (copy) NSNumber *chargePercentRemaining;
@property (copy) NSMeasurement *distanceRemaining;
@property (copy) NSNumber *charging;
@property (copy) NSNumber *minutesToFull;
@property (copy) NSMeasurement *maximumDistance;
@property (copy) NSMeasurement *distanceRemainingElectric;
@property (copy) NSMeasurement *maximumDistanceElectric;
@property (copy) NSMeasurement *distanceRemainingFuel;
@property (copy) NSMeasurement *maximumDistanceFuel;
@property (copy) NSDictionary *consumptionFormulaArguments;
@property (copy) NSDictionary *chargingFormulaArguments;
@property (copy) NSDateComponents *dateOfLastStateUpdate;
@property (copy) NSString *activeConnector;
@property (copy) NSMeasurement *maximumBatteryCapacity;
@property (copy) NSMeasurement *currentBatteryCapacity;
@property (copy) NSMeasurement *minimumBatteryCapacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end
