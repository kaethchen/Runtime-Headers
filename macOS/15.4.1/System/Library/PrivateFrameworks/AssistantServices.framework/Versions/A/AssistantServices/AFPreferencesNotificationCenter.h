@class NSLock, NSMutableDictionary;

@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSLock *instanceLock;
    NSMutableDictionary *darwinRegistrationsByObserver;
    NSMutableDictionary *darwinRegistrationsByName;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addObserverForDarwinName:(struct __CFString { } *)a0 usingBlock:(id /* block */)a1;

@end
