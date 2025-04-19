@class EFPair, NSString, NSDate;

@interface EMFollowUp : NSObject <NSSecureCoding, NSCopying, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EFPair *pair;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *jsonStringForModelEvaluationForSuggestions;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 jsonStringForModelEvaluationForSuggestions:(id)a2;

@end
