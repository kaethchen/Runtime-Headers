@class NSArray, NSString, INDateComponentsRange;

@interface INSaveHealthSampleIntentResponse : INIntentResponse <INSaveHealthSampleIntentResponseExport>

@property (readonly) long long code;
@property (copy) NSArray *sampleUuids;
@property (copy) INDateComponentsRange *recordDate;
@property (copy) NSString *defaultUnit;
@property (copy) NSArray *valuesDefaultUnits;
@property (copy) NSString *userProvidedUnit;
@property (copy) NSArray *valuesUserProvidedUnits;
@property (copy) NSString *punchoutUrl;
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
