@class NSMutableDictionary;

@interface ABBuddyStatus : NSObject {
    Class IMService;
    NSMutableDictionary *cache;
}

+ (id)sharedBuddyStatus;
+ (BOOL)showStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateStatus:(id)a0;
- (BOOL)isAvailable:(id)a0;
- (id)abServiceKeyForHandle:(id)a0;
- (BOOL)isHandleAvailable:(id)a0;
- (unsigned long long)statusForPerson:(id)a0;
- (id)statusImageForPerson:(id)a0;
- (void)statusUpdate:(id)a0;

@end
