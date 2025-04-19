@class NSString;

@interface _EXPersona : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)currentPersona;
+ (id)personaWithPersonaUniqueString:(id)a0;
+ (id)defaultPersona;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonaUniqueString:(id)a0;

@end
