@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject

@property (retain, nonatomic) FCPersistentDictionary *persistentDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (BOOL)enqueueActionWithType:(long long)a0;
- (id)peekAtActionTypes;
- (BOOL)popActionTypesUpToCount:(unsigned long long)a0 setLocalDataHintIfNeeded:(BOOL)a1;
- (BOOL)readLocalDataHint;

@end
