@class NSString, NSDictionary;

@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext

@property (readonly, nonatomic) NSString *inputVariant;
@property (readonly, nonatomic) NSString *secondaryLanguage;
@property (readonly, nonatomic) NSString *secondaryRegion;
@property (readonly, nonatomic) NSString *layoutName;
@property (readonly, nonatomic) unsigned char keyboardType;
@property (readonly, nonatomic) NSString *keyboardConfiguration;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) NSDictionary *testingParameters;

+ (BOOL)supportsSecureCoding;
+ (long long)userInterfaceIdiomStringToEnum:(id)a0;
+ (id)keyboardTypeEnumToString:(unsigned char)a0;
+ (unsigned char)keyboardTypeStringToEnum:(id)a0;
+ (id)userInterfaceIdiomToString:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultLanguageOrRegionFromInputMode:(id)a0;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 inputVariant:(id)a2 secondaryLanguage:(id)a3 secondaryRegion:(id)a4 layoutName:(id)a5 keyboardType:(unsigned char)a6 keyboardConfiguration:(id)a7 userInterfaceIdiom:(long long)a8 testingParameters:(id)a9;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 keyboardConfiguration:(id)a4 userInterfaceIdiom:(long long)a5;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4 testingParameters:(id)a5;
- (id)initWithKeyboardState:(id)a0 activeInputModes:(id)a1 testingParameters:(id)a2;

@end
