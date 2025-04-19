@class NSString;

@interface GKPlayerActivityRelationshipBase : GKInternalRepresentation

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSString *identifier;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
