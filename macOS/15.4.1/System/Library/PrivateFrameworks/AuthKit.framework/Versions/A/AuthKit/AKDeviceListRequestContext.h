@class NSString, NSArray, NSUUID;

@interface AKDeviceListRequestContext : NSObject <AKAuthenticatedServerRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isForceFetch) BOOL forceFetch;
@property (copy, nonatomic) NSString *proxiedBundleID;
@property (nonatomic) long long type;
@property (nonatomic) BOOL fetchDeviceSafetyState;
@property (nonatomic) BOOL includeUntrustedDevices;
@property (nonatomic) BOOL includeFamilyDevices;
@property (copy, nonatomic) NSArray *services;
@property (copy, nonatomic) NSArray *operatingSystems;
@property (copy, nonatomic) NSArray *serialNumbers;
@property (readonly, nonatomic) NSUUID *_identifier;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
