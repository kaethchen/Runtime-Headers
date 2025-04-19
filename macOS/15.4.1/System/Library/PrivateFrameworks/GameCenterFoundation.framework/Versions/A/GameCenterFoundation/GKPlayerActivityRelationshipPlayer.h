@class GKPlayerInternal;

@interface GKPlayerActivityRelationshipPlayer : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) GKPlayerInternal *playerInternal;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
