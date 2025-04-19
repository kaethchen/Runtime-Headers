@class NSString, NSUUID;

@interface FPFSChangeRecord : NSObject

@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int rawFlags;
@property (readonly, nonatomic) unsigned long long eventID;
@property (readonly, nonatomic) BOOL isBarrier;
@property (readonly, nonatomic) BOOL isNotification;
@property (readonly, nonatomic) NSUUID *barrierUUID;
@property (readonly, nonatomic) unsigned int additionalDebugFlags;

- (id)description;
- (void).cxx_destruct;
- (unsigned int)additionalDebugFlagsForHistoricalStream:(BOOL)a0;
- (id)initWithPath:(id)a0 fileID:(unsigned long long)a1 flags:(unsigned int)a2 eventID:(unsigned long long)a3;

@end
