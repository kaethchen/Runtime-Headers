@class NSString, NSDictionary, NSArray, NSDate;

@interface APMetric : NSObject <APMetricProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *properties;
@property (nonatomic) long long purpose;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) long long options;
@property (readonly, nonatomic) long long metric;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *internalProperties;
@property (retain, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *secondaryHandle;
@property (readonly, nonatomic) long long order;
@property (retain, nonatomic) NSString *trace;
@property (retain, nonatomic) NSArray *branch;
@property (readonly, nonatomic) NSDictionary *relayData;
@property (retain, nonatomic) NSArray *environment;
@property (nonatomic) unsigned int source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isMetricWithContainerAllowed:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_options;
- (id)_properties;
- (void)addInternalPropertyValue:(id)a0 forKey:(id)a1;
- (id)initWithPurpose:(long long)a0 metric:(long long)a1 contentIdentifier:(id)a2 contextIdentifier:(id)a3 handle:(id)a4 secondaryHandle:(id)a5 branch:(id)a6 properties:(id)a7 internalProperties:(id)a8 relayData:(id)a9 environment:(id)a10 order:(long long)a11 options:(long long)a12;
- (void)updatePurpose:(long long)a0;
- (id)_internalProperties;
- (id)_addOptionsToProperties:(id)a0;
- (id)_descriptionWithFormat:(id)a0;
- (id)_optionsArray;
- (id)_relayData;
- (BOOL)validateMetricAndSetupIdentifiers:(id)a0;

@end
