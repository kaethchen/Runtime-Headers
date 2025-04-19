@class NSMutableArray;

@interface ATXInterruptionManagerContactSuggestions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *recommendedContacts;
@property (readonly, nonatomic) NSMutableArray *candidateContacts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addCandidateContact:(id)a0;
- (void)addRecommendedContact:(id)a0;
- (id)initWithRecommendedContacts:(id)a0 candidateContacts:(id)a1;

@end
