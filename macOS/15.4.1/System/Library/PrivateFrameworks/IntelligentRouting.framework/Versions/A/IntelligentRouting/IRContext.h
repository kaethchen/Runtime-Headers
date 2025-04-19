@class NSSet, NSString, NSMutableSet;

@interface IRContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_internalCandidateResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *candidateResults;
@property (readonly, nonatomic) NSString *contextIdentifier;
@property (readonly, nonatomic) BOOL isBannerClassificationUnavailable;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCandidateResult:(id)a0;
- (void)updateBundleIdentifier:(id)a0;
- (void)updateIsBannerClassificationUnavailable:(BOOL)a0;

@end
