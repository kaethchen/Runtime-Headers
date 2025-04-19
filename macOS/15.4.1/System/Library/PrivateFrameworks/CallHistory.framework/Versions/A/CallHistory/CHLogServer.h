@class NSMutableDictionary;

@interface CHLogServer : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSMutableDictionary *logHandleToDomain;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)logHandleForDomain:(const char *)a0;

@end
