@class NSString, NSManagedObjectID;

@interface _DPPTRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateValue;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityName;
- (BOOL)copyToManagedObject:(id)a0;
- (id)jsonString;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 privateValue:(id)a1 creationDate:(double)a2 submitted:(BOOL)a3 objectId:(id)a4;
- (BOOL)isEqualToPTRecord:(id)a0;

@end
