@interface AVSemanticStyle : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) float subjectBias;
@property (readonly, nonatomic) float toneBias;
@property (readonly, nonatomic) float sceneBias;
@property (readonly, nonatomic) float warmthBias;

+ (id)identityStyle;
+ (id)semanticStyleWithToneBias:(float)a0 warmthBias:(float)a1;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithToneBias:(float)a0 warmthBias:(float)a1;

@end
