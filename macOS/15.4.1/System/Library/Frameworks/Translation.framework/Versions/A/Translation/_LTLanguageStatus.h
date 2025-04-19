@class NSUUID, NSArray;

@interface _LTLanguageStatus : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long observationType;
@property (readonly, nonatomic) BOOL useDedicatedMachPort;
@property (readonly, nonatomic) id /* block */ observations;
@property (readonly, copy, nonatomic) NSArray *cachedStatus;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)_start;
- (id)initWithObservationType:(unsigned long long)a0 useDedicatedMachPort:(BOOL)a1 observations:(id /* block */)a2;

@end
