@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *treatmentURL;

+ (id)recordWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementTreatmentURL:(id)a0;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;

@end
