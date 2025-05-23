@class NSString, NSSet, SVXUserFeedback;

@interface SVXUserFeedbackNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) SVXUserFeedback *feedback;
@property (readonly, copy, nonatomic) NSSet *dependentNodes;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 duration:(double)a1 feedback:(id)a2 dependentNodes:(id)a3;

@end
