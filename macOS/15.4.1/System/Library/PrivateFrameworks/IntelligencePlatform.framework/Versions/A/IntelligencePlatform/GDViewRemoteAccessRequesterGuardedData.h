@class NSMapTable, NSMutableDictionary;

@interface GDViewRemoteAccessRequesterGuardedData : NSObject

@property (retain, nonatomic) NSMapTable *strongWeakCache;
@property (retain, nonatomic) NSMutableDictionary *persistentTokens;
@property (retain, nonatomic) NSMapTable *strongWeakInfoCache;
@property (retain, nonatomic) NSMutableDictionary *persistentInfo;

- (id)init;
- (void).cxx_destruct;
- (id)accessInfoForKey:(id)a0 useCase:(id)a1;
- (id)keyForViewName:(id)a0 useCase:(id)a1;
- (id)objectForKey:(id)a0 useCase:(id)a1;
- (void)setInfo:(id)a0 forKey:(id)a1 useCase:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1 useCase:(id)a2;
- (void)setPersistentInfo:(id)a0 forKey:(id)a1 useCase:(id)a2;
- (void)setPersistentObject:(id)a0 forKey:(id)a1 useCase:(id)a2;

@end
