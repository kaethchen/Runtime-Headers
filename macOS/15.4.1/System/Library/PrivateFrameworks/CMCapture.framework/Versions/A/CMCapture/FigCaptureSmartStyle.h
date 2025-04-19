@class NSString, NSDictionary;

@interface FigCaptureSmartStyle : NSObject <FigXPCCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *cast;
@property (readonly, nonatomic) float intensity;
@property (readonly, nonatomic) float toneBias;
@property (readonly, nonatomic) float colorBias;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromDictionary:(id)a0;
+ (id)identityStyle;
+ (id)styleWithCast:(id)a0 intensity:(float)a1 toneBias:(float)a2 colorBias:(float)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
