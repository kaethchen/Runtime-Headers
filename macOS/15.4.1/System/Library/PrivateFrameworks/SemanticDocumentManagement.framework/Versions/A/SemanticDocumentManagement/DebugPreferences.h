@class NSMutableDictionary;

@interface DebugPreferences : NSObject {
    NSMutableDictionary *_prefDictionary;
}

+ (id)defaultDebugPreferences;

- (void)dealloc;
- (id)init;
- (float)floatForKey:(id)a0;

@end
