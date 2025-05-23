@class NSString, NSNumber, NSArray;

@interface AFMultiUserStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *vtSatScore;
@property (readonly, copy, nonatomic) NSArray *confidenceScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)initWithConfidenceScores:(id)a0;
- (id)initWithVtSatScore:(id)a0;
- (id)initWithVtSatScore:(id)a0 confidenceScores:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)serializedBackingStore;

@end
