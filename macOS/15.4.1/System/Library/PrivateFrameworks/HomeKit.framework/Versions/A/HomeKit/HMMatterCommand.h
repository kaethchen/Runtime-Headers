@class NSArray, NSDictionary, HMAccessory, NSNumber;

@interface HMMatterCommand : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *commandID;
@property (readonly, nonatomic) NSNumber *clusterID;
@property (readonly, nonatomic) NSNumber *endpointID;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, copy, nonatomic) NSDictionary *commandFields;
@property (readonly, nonatomic) NSArray *expectedValues;

+ (id)new;
+ (id)allowedCommandFieldsClassesForShortcuts;
+ (id)allowedExpectedValuesClassesForShortcuts;
+ (id)commandWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializeForAdd;
- (void)_configureWithContext:(id)a0 home:(id)a1;
- (id)encodeAsProtoBuf;
- (id)initWithCommandID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 accessory:(id)a3 commandFields:(id)a4 expectedValues:(id)a5;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (BOOL)isKindOfAllowedCommandFieldsClass:(id)a0;
- (BOOL)isKindOfAllowedExpectedValuesClass:(id)a0;

@end
