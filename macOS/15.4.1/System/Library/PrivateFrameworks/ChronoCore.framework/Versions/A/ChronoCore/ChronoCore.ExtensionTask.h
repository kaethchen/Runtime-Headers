@class NSString;

@interface ChronoCore.ExtensionTask : NSObject {
    void /* unknown type, empty encoding */ requiredDataProtectionLevel;
    void /* unknown type, empty encoding */ schedulingConfiguration;
    void /* unknown type, empty encoding */ schedulingOptions;
    void /* unknown type, empty encoding */ powerlogWakeReason;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ cost;
    void /* unknown type, empty encoding */ allowCostOverride;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ taskIdentifier;
    void /* unknown type, empty encoding */ logDigest;
    void /* unknown type, empty encoding */ syncWorkItem;
    void /* unknown type, empty encoding */ asyncWorkItem;
    void /* unknown type, empty encoding */ taskWorkItem;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ creationDate;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
