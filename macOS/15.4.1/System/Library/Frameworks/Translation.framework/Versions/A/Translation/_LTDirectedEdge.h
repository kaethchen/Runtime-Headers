@class NSString, NSNumber;

@interface _LTDirectedEdge : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long targetPhraseIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *targetPreview;
@property (readonly, nonatomic) NSNumber *targetGender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, nonatomic) NSString *menuDescription;

+ (id)genderEdgeWithTargetPhraseIndex:(unsigned long long)a0 targetPreview:(id)a1 gender:(unsigned long long)a2 defaultGender:(unsigned long long)a3;
+ (id)meaningEdgeWithTargetPhraseIndex:(unsigned long long)a0 targetPreview:(id)a1 meaningDescription:(id)a2 targetGender:(id)a3 defaultGender:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTargetPhraseIndex:(unsigned long long)a0 type:(unsigned long long)a1 targetPreview:(id)a2 targetGender:(id)a3 defaultGender:(id)a4 menuDescription:(id)a5;

@end
