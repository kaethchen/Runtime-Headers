@class NSString, NSDictionary, HDSyncEntityIdentifier, NSNumber;

@interface HDDatabasePruningShowEntity : NSObject

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) HDSyncEntityIdentifier *identifier;
@property (readonly, nonatomic) BOOL supportsPruning;
@property (readonly, nonatomic) BOOL supportsPruningRestrictionPredicates;
@property (readonly, nonatomic) NSNumber *maximumPruningAnchor;
@property (readonly, nonatomic) NSDictionary *pruningRestrictionPredicates;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClassName:(id)a0 identifier:(id)a1 supportsPruning:(BOOL)a2 supportsPruningRestrictionPredicates:(BOOL)a3 maximumPruningAnchor:(id)a4 pruningRestrictionPredicates:(id)a5;

@end
