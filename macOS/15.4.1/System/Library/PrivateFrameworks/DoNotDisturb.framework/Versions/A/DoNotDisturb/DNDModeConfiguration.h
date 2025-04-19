@class DNDConfiguration, NSString, NSArray, DNDMode, NSDate;

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL _hasSecureData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } lastModifiedByVersion;
@property (readonly, copy, nonatomic) NSString *lastModifiedByDeviceID;
@property (readonly, copy) DNDMode *mode;
@property (readonly, copy) DNDConfiguration *configuration;
@property (readonly, copy) NSArray *triggers;
@property (readonly) unsigned long long impactsAvailability;
@property (readonly) unsigned long long dimsLockScreen;
@property (readonly) unsigned long long allowSmartEntry;
@property (readonly, copy) NSDate *created;
@property (readonly, copy) NSDate *lastModified;
@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly) long long compatibilityVersion;
@property (readonly) long long resolvedCompatibilityVersion;
@property (readonly) long long rawResolvedCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModeConfiguration;
+ (id)defaultReduceInterruptionsMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (unsigned long long)allowSmartEntry;
- (BOOL)_containsSecureTriggers:(id)a0;
- (id)_initWithModeConfiguration:(id)a0;
- (long long)_maxTriggerCompatibilityVersion:(id)a0;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (BOOL)hasSecureData;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2 impactsAvailability:(unsigned long long)a3 dimsLockScreen:(unsigned long long)a4 created:(id)a5 lastModified:(id)a6 automaticallyGenerated:(BOOL)a7 compatibilityVersion:(long long)a8 lastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })a9 lastModifiedByDeviceID:(id)a10;
- (void)log:(id)a0 withMessage:(id)a1;
- (id)mergeDecision:(id)a0 reason:(id)a1;
- (id)mergeWithRemoteModeConfiguration:(id)a0;

@end
