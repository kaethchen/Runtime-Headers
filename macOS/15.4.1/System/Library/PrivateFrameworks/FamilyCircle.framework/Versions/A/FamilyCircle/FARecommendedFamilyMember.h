@class NSString, CNContact;

@interface FARecommendedFamilyMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *handle;
@property (copy) NSString *iMessageHandle;
@property (copy) NSString *displayName;
@property (retain) CNContact *contact;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMegadomeRecommendation:(id)a0;
- (id)_safeClasses;
- (id)contactFromRecommendationWithIdentifier:(id)a0;
- (id)initWithDisplayName:(id)a0 handle:(id)a1 iMessageHandle:(id)a2 contact:(id)a3;
- (id)initWithPeopleSuggesterRecommendation:(id)a0;

@end
