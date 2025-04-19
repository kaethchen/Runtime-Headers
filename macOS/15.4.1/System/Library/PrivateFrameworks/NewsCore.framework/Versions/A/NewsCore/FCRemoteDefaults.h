@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (BOOL)isAvailable;
- (id)URLRequest;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (void)checkForUpdate;
- (id)initWithBackgroundTaskable:(id)a0;
- (void)updateRemoteDefaults;

@end
