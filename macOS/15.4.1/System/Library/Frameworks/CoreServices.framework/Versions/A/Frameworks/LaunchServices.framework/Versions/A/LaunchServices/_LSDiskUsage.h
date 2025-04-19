@class NSNumber, NSString, NSMutableDictionary;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *staticUsage;
@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;

+ (id)_serverQueue;
+ (id)propertyQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (id)dynamicUsage;
- (BOOL)fetchClientSideWithError:(id *)a0;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (id)onDemandResourcesUsage;
- (void)removeAllCachedUsageValues;
- (id)sharedUsage;
- (id)staticUsage;

@end
