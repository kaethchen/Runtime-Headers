@class NSString, WFColor, NSDictionary;

@interface WFServicesWorkflow : WFDatabaseObjectDescriptor <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long hexColor;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) WFColor *color;
@property (readonly, copy, nonatomic) NSDictionary *serviceEntry;
@property (readonly, nonatomic) BOOL canHandleEmptyInput;
@property (readonly, nonatomic) BOOL canHandleNoOutputSurface;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 color:(long long)a2 glyphCharacter:(unsigned short)a3 serviceEntry:(id)a4 canHandleEmptyInput:(BOOL)a5 canHandleNoOutputSurface:(BOOL)a6;

@end
