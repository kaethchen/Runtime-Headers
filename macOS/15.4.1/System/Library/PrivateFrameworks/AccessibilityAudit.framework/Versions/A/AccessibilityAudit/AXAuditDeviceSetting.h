@class NSString, NSNumber;

@interface AXAuditDeviceSetting : NSObject <AXAuditTransportableObjectProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *currentValueNumber;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long settingType;
@property (nonatomic) long long sliderTickMarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allKnownIdentifiers;
+ (id)createWithIdentifier:(id)a0 currentValue:(id)a1 settingType:(unsigned long long)a2;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
