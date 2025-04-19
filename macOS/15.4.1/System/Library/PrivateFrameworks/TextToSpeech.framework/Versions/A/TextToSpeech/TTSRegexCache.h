@class NSMutableDictionary;

@interface TTSRegexCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _regexCacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)regexForString:(id)a0;
- (id)regexForString:(id)a0 atStart:(BOOL)a1;

@end
