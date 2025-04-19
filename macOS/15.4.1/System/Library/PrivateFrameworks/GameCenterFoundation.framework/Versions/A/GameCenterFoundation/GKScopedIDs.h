@class NSNumber, NSString;

@interface GKScopedIDs : GKInternalRepresentation

@property (retain) NSNumber *createdPersistent;
@property (readonly) BOOL arePersistent;
@property (readonly) NSString *gameBundleID;
@property (readonly) NSString *playerID;
@property (readonly) NSString *gamePlayerID;
@property (readonly) NSString *teamPlayerID;

+ (BOOL)availableForPlayerID:(id)a0;
+ (id)makeNonpersistentWithPlayerID:(id)a0 gameBundleID:(id)a1;
+ (id)makePersistentWithPlayerID:(id)a0 gameBundleID:(id)a1 gamePlayerID:(id)a2 teamPlayerID:(id)a3;
+ (id)makePlayerIDtoScopedIDsDictFromScopedIDs:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithNonpersistentPlayerID:(id)a0 gameBundleID:(id)a1 salt:(int)a2;
- (id)initWithPersistentPlayerID:(id)a0 gameBundleID:(id)a1 gamePlayerID:(id)a2 teamPlayerID:(id)a3;
- (BOOL)isForPlayerID:(id)a0 gameBundleID:(id)a1;

@end
