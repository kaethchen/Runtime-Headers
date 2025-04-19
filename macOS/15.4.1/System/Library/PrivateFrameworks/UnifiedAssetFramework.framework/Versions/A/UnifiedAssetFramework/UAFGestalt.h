@interface UAFGestalt : NSObject

@property (class, readonly, nonatomic) UAFGestalt *sharedManager;

+ (BOOL)predicateMatch:(id)a0;
+ (BOOL)deviceMatch:(id)a0 onMatch:(id /* block */)a1;
+ (id)dictionaryForGestalt:(id)a0;
+ (BOOL)dictionaryIsValid:(id)a0;
+ (BOOL)isKeySupported:(id)a0 key:(id)a1;
+ (id)urlForGestalt:(id)a0;

- (id)init;
- (id)queryAllSupportedKeys:(id)a0;
- (BOOL)query:(id)a0 forKey:(id)a1;

@end
