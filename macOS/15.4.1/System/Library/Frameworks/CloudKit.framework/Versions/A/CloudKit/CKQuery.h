@class NSString, NSArray, NSPredicate, CKRoughlyEquivalentProperties;

@interface CKQuery : NSObject <CKRoughlyEquivalent, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *recordType;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (id)copySortDescriptor:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setPredicate:(id)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (id)CKPropertiesDescription;
- (void)_setRecordType:(id)a0;
- (id)_predicateWithoutCopy;
- (id)_sortDescriptorsWithoutCopy;

@end
