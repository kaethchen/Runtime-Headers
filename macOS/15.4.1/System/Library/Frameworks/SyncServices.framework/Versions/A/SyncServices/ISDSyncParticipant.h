@class NSDate, NSString, NSArray, NSMutableDictionary, ISDClient, NSMutableSet, NSMutableArray, NSNumber, ISDFileReference;
@protocol ISyncSessionCallback;

@interface ISDSyncParticipant : NSObject {
    ISDClient *_client;
    NSString *_clientId;
    NSArray *_entityNames;
    NSMutableDictionary *_transientSyncModes;
    NSMutableArray *_entityNamesHavingTruthPulled;
    NSMutableSet *_pushTruthApprovalTable;
    NSArray *_clientSyncStates;
    id<ISyncSessionCallback> _callbackTarget;
    id _clientState;
    int _phase;
    BOOL _alerted;
    NSDate *_responseDate;
    ISDFileReference *_formatterBundle;
    NSNumber *_useLocalIdsForGuids;
    BOOL _synchronizesAllEntities;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)client;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithClient:(id)a0;
- (id)clientId;
- (void)setEntityNames:(id)a0;
- (id)entityNames;
- (id)responseDate;
- (void)setClientState:(id)a0;
- (id)clientState;
- (BOOL)alerted;
- (void)setAlerted:(BOOL)a0;
- (void)setResponseDate:(id)a0;
- (void)clearSyncStates;
- (id)fastEntityNames;
- (id)formatterBundle;
- (id)callbackTarget;
- (id)entityNamesHavingTruthPulled;
- (id)fastClient;
- (BOOL)getTransientSyncMode:(int *)a0 forEntityName:(id)a1;
- (BOOL)isApprovedToPushTruthForEntityName:(id)a0;
- (id)newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:(id)a0;
- (void)removeTransientSyncModeForEntityName:(id)a0;
- (void)setApprovedToPushTruth:(BOOL)a0 forEntityName:(id)a1;
- (void)setCallbackTarget:(id)a0;
- (void)setSyncMode:(int)a0 forEntityName:(id)a1;
- (void)setSyncPhase:(int)a0;
- (void)setTransientSyncMode:(int)a0 forEntityName:(id)a1;
- (int)syncModeForEntityName:(id)a0;
- (int)syncPhase;
- (id)syncStates;
- (BOOL)synchronizesAllEntities;
- (BOOL)useLocalIdsForGUIDs;

@end
