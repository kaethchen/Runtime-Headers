@class NSString;

@interface CESRAppEntityMapping : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) NSString *assistantSchemaType;
@property (readonly, nonatomic) NSString *appEntityName;
@property (readonly, nonatomic) NSString *lmeTemplate;
@property (readonly, nonatomic) NSString *lmeTag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceBundleId:(id)a0 assistantSchemaType:(id)a1 appEntityName:(id)a2 lmeTemplate:(id)a3 lmeTag:(id)a4;

@end
