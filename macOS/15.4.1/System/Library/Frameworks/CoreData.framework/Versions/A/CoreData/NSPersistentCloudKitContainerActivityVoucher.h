@class NSString, NSFetchRequest, CKOperationConfiguration;

@interface NSPersistentCloudKitContainerActivityVoucher : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSFetchRequest *fetchRequest;
@property (readonly, copy, nonatomic) CKOperationConfiguration *operationConfiguration;

+ (id)describeConfiguration:(id)a0;
+ (id)describeConfigurationWithoutPointer:(id)a0;
+ (id)stringForQoS:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 forEventsOfType:(long long)a1 withConfiguration:(id)a2 affectingObjectsMatching:(id)a3;

@end
