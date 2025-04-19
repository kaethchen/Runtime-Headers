@class NSString;

@interface _PSCandidate : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isSystemBundleId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domainId;
@property (readonly, copy, nonatomic) NSString *derivedIntentId;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *recipientsId;

+ (id)selfCandidate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomainId:(id)a0 derivedIntentId:(id)a1 bundleId:(id)a2 recipientsId:(id)a3;
- (id)candidateForDeduping;
- (id)candidateIdentifier;
- (BOOL)hasCandidateIdentifier;
- (void)populateIsSystemBundleId;

@end
