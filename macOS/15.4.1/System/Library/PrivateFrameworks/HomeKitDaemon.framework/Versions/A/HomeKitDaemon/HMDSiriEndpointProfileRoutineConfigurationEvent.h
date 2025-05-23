@class NSString, HMDSiriEndpointProfileFields, HMDSiriEndpointProfileAccessorySettingFields, NSDictionary, NSUUID;

@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) NSString *accessoryCategoryType;
@property (readonly) HMDSiriEndpointProfileFields *profileFields;
@property (readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessoryCategoryType:(id)a0 profileFields:(id)a1 accessorySettingFields:(id)a2;

@end
