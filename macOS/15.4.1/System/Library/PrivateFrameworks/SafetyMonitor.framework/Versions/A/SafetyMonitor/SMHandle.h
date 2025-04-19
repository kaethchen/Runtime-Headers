@class NSString, NSArray;

@interface SMHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *primaryHandle;
@property (readonly, nonatomic) NSArray *secondaryHandles;

+ (long long)getSMHandleTypeWithHandle:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)descriptionDictionary;
- (id)canonicalizedHandle;
- (id)initWithPrimaryHandle:(id)a0 secondaryHandles:(id)a1;
- (id)outputToDictionary;
- (BOOL)hasEqualPrimaryHandle:(id)a0;

@end
