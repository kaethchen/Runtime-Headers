@class NSSet;

@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *torsoAnnotations;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)stateUpdateByMergingStateUpdate:(id)a0;
- (id)initWithTorsoAnnotations:(id)a0;
- (id)initWithTorsoAnnotationsArray:(id)a0;

@end
