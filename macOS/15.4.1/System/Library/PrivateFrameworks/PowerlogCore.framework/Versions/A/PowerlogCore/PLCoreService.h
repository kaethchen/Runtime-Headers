@class NSMutableDictionary;

@interface PLCoreService : PLCoreOperator

@property (retain) NSMutableDictionary *services;

- (id)init;
- (void).cxx_destruct;
- (void)startPreUnlockServices;
- (void)startServices;
- (void)stopServices;

@end
