@class NSColor;

@interface GKDynamicColor : NSDynamicNamedColor

@property (readonly, nonatomic) NSColor *lightColor;
@property (readonly, nonatomic) NSColor *darkColor;
@property (readonly, nonatomic) NSColor *lightHighContrastColor;
@property (readonly, nonatomic) NSColor *darkHighContrastColor;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resolvedColor;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 lightHighContrastColor:(id)a2 darkHighContrastColor:(id)a3;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 darkHighContrastColor:(id)a2;
- (id)initWithLightColor:(id)a0 darkColor:(id)a1 lightHighContrastColor:(id)a2;

@end
