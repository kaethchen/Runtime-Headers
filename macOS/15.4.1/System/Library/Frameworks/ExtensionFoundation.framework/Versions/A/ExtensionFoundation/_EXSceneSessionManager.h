@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)sessions;
- (void)addSession:(id)a0;
- (id)sessionForIdentifier:(id)a0;
- (void)removeSessionForIdentifier:(id)a0;

@end
