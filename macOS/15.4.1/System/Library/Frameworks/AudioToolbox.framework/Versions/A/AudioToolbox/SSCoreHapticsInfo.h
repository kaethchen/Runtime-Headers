@interface SSCoreHapticsInfo : NSObject

+ (id)instance;

- (void)disposeSSID:(unsigned long long)a0;
- (unsigned long long)generateNewSSIDForPlayer:(id)a0;
- (id)getPlayerForSSID:(unsigned long long)a0;

@end
