@interface GCSDirectionPadMapping : GCSElementMapping

@property (nonatomic) BOOL invertHorizontally;
@property (nonatomic) BOOL invertVertically;
@property (nonatomic) BOOL swapAxes;

+ (BOOL)supportsSecureCoding;
+ (id)archivalClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonObject;
- (id)id;
- (BOOL)isCustomized;
- (id)initWithJSONObject:(id)a0;
- (id)initWithElementKey:(id)a0 mappingKey:(id)a1 remappingOrder:(int)a2;
- (id)initWithElementKey:(id)a0 mappingKey:(id)a1 remappingOrder:(int)a2 invertHorizontally:(BOOL)a3 invertVertically:(BOOL)a4 swapAxes:(BOOL)a5;

@end
