@class NSString, NSArray, NSCalendarDate;

@interface ISDSyncState : ISDDataObject <NSCopying, NSCoding> {
    NSString *_entityName;
    NSArray *_propertyNames;
    NSCalendarDate *_lastSyncDate;
    int _lastSyncStatus;
    unsigned int _lastSyncGeneration;
    int _syncMode;
    int _requestedMode;
    BOOL _clientCanPullOnly;
    BOOL _clientCanPushOnly;
    BOOL _enabled;
    BOOL _clientWantsToPullTruth;
    BOOL _shouldRefilter;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)entityName;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)lastSyncDate;
- (void)setLastSyncDate:(id)a0;
- (void)setSyncMode:(int)a0;
- (int)syncMode;
- (id)propertyNames;
- (BOOL)_isSupportedEntity;
- (BOOL)clientCanPullOnly;
- (BOOL)clientCanPushOnly;
- (BOOL)clientWantsToPullTruth;
- (id)fastEntityName;
- (id)fastPropertyNames;
- (id)initWithEntityName:(id)a0 propertyNames:(id)a1;
- (unsigned int)lastSyncGeneration;
- (int)lastSyncStatus;
- (int)requestedSyncMode;
- (void)setClientCanPullOnly:(BOOL)a0;
- (void)setClientCanPushOnly:(BOOL)a0;
- (void)setClientWantsToPullTruth:(BOOL)a0;
- (void)setLastSyncGeneration:(unsigned int)a0;
- (void)setLastSyncStatus:(int)a0;
- (void)setPropertyNames:(id)a0;
- (void)setRequestedSyncMode:(int)a0;
- (void)setShouldRefilter:(BOOL)a0;
- (BOOL)shouldRefilter;

@end
