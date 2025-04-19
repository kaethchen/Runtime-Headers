@class NSDictionary, NSString;

@interface HMDCHIPControllerNonResidentNodeStorage : HMFObject <HMFLogging, NSCopying>

@property (copy) NSDictionary *keyValueStore;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)updateHomeModel:(id)a0;
- (BOOL)updateUsingHomeModel:(id)a0;

@end
