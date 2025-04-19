@class NSData, NSArray, NSString;

@interface NIHomeDeviceConfiguration : NIConfiguration {
    NSArray *_monitoredRegions;
    NSString *_regionDescription;
}

@property long long antennaDiversityOverride;
@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;
@property long long minimumPreferredUpdatedRate;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (void)_updateRegionDescription;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)initWithRegions:(id)a0;

@end
