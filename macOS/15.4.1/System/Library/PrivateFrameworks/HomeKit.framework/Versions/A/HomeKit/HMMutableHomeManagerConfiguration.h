@class NSOperationQueue, HMFLocationAuthorization;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property unsigned long long cachePolicy;
@property unsigned long long options;
@property (getter=isDiscretionary) BOOL discretionary;
@property unsigned long long inactiveUpdatingLevel;
@property (getter=isAdaptive) BOOL adaptive;
@property (retain) NSOperationQueue *delegateQueue;
@property (retain) HMFLocationAuthorization *locationAuthorization;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
