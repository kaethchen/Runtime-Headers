@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initForRelationshipAtKey:(id)a0;

@end
