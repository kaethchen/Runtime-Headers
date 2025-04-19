@class NSString, NSNumber, NSArray;

@interface CERuleset : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSNumber *maxRecommendations;
@property (nonatomic) BOOL ignoreClientSectionRank;
@property (readonly, nonatomic) NSArray *context;
@property (copy, nonatomic) NSString *userType;
@property (readonly, nonatomic) NSArray *recommendationRules;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)sortRecommendationRulesUsingComparator:(id /* block */)a0;

@end
