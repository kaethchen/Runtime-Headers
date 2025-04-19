@interface GKViceroyNATTypeHelper : NSObject

@property (class, readonly) unsigned long long initialNATType;
@property (class, readonly) unsigned long long forceRelayNATType;

+ (BOOL)isClosed:(unsigned long long)a0;
+ (BOOL)isUnknown:(unsigned long long)a0;

@end
