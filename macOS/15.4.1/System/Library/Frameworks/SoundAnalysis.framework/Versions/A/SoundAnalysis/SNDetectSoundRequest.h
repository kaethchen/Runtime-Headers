@class NSArray, NSString, MLModelConfiguration;

@interface SNDetectSoundRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) NSArray *allValidSoundIdentifiers;
@property (class, nonatomic, readonly) NSArray *allValidDetectorIdentifiers;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *soundIdentifier;
@property (nonatomic, retain) MLModelConfiguration *modelConfiguration;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)eagerlyAllocateModelsForRequest:(id)a0 error:(id *)a1;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithDetectorIdentifier:(id)a0 error:(id *)a1;
- (id)initWithSoundIdentifier:(id)a0;
- (id)initWithSoundIdentifier:(id)a0 shouldUseTwoPassDetection:(BOOL)a1;
- (id)initWithVGGishBasedMLModel:(id)a0 soundIdentifier:(id)a1;

@end
