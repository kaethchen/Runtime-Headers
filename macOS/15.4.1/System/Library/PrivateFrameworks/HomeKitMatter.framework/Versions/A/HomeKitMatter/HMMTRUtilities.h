@interface HMMTRUtilities : HMFObject

+ (id)encodeObject:(id)a0;
+ (id)identifierStringWithCHIPNodeID:(id)a0;
+ (id)caseAuthenticatedTagWithIdentifier:(unsigned short)a0 version:(unsigned short)a1;
+ (void)parseCaseAuthenticatedTag:(id)a0 identifier:(unsigned short *)a1 version:(unsigned short *)a2;
+ (unsigned short)randomCASEAuthenticatedTagIdentifier;
+ (unsigned long long)randomNodeID;
+ (id)__baseClusterValueForAttributeDeviceListFromReadValue:(id)a0 forIdentify:(id)a1;
+ (id)_pathOfMTRClusterReadValue:(id)a0;
+ (BOOL)compareUnorderedUniqueNumberArray:(id)a0 withArray:(id)a1;
+ (id)dateToMatterEpoch:(id)a0;
+ (id)hmmtrPairingsFromMTRClusterReadValue:(id)a0 vendorMetadataStore:(id)a1;
+ (id)hmmtr_shortTypeFromUUID:(id)a0;
+ (BOOL)isValidCATSubject:(id)a0;
+ (id)matterEpochToDate:(id)a0;
+ (id)mtrAuthModeAsString:(id)a0;
+ (id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)a0 clusterIdentifier:(id)a1 attributeIdentifier:(id)a2 forIdentify:(id)a3;
+ (id)mtrBaseClusterValueFromMTRClusterReadResultValue:(id)a0 forIdentify:(id)a1;
+ (id)mtrBaseClusterValueFromMTRClusterReportValue:(id)a0;
+ (id)mtrPrivilegeAsString:(id)a0;
+ (long long)nextServiceInstanceID:(long long)a0 previousCharacteristicsCount:(unsigned long long)a1;
+ (void)printAccessControlList:(id)a0;
+ (long long)randomDiscriminator;
+ (id)sanitizeHAPName:(id)a0;
+ (id)setupIDFromSetupCode:(id)a0 discriminator:(id)a1;
+ (BOOL)supportedLinkLayerTypesContainsEthernet:(id)a0;
+ (BOOL)supportedLinkLayerTypesContainsThread:(id)a0;
+ (BOOL)supportedLinkLayerTypesContainsWiFi:(id)a0;
+ (id)vendorNameForVendorID:(id)a0 vendorMetadataStore:(id)a1;

@end
