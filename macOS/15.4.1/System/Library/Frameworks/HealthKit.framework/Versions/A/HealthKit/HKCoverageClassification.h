@class HKConcept, NSString, NSArray, HKMedicalCodingCollection;

@interface HKCoverageClassification : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    HKConcept *_type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) HKConcept *type;
@property (readonly, copy, nonatomic) NSArray *typeCodings;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *typeCodingCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverageClassificationWithTypeCodings:(id)a0 value:(id)a1 name:(id)a2;
+ (id)indexableKeyPathsWithPrefix:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setType:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithTypeCodings:(id)a0 value:(id)a1 name:(id)a2;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;

@end
