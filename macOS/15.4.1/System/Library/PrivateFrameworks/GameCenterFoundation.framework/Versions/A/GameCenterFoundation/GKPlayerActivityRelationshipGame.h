@class NSNumber, GKPlayerActivityRelationshipIcon;

@interface GKPlayerActivityRelationshipGame : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSNumber *adamId;
@property (retain, nonatomic) GKPlayerActivityRelationshipIcon *icon;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
