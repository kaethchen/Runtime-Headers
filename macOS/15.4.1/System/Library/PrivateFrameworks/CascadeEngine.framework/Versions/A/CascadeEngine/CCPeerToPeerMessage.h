@interface CCPeerToPeerMessage : NSObject <BMOPACKCodable>

@property (readonly, nonatomic) unsigned long long syncReason;
@property (readonly, nonatomic) unsigned long long protocolVersion;
@property (readonly, nonatomic) double walltime;

- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)initWithSyncReason:(unsigned long long)a0 protocolVersion:(unsigned long long)a1 wallTime:(double)a2;

@end
