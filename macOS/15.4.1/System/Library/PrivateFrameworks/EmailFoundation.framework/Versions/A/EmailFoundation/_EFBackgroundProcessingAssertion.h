@class NSArray, NSDate;

@interface _EFBackgroundProcessingAssertion : NSObject {
    NSDate *_currentExpiry;
    unsigned long long _count;
    unsigned long long _resetCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_protectedFiles;
}

- (void).cxx_destruct;
- (void)_checkIfExpired;
- (BOOL)_iterateFilesPerformingAction:(id /* block */)a0 error:(id *)a1;
- (BOOL)_releaseAssertionWithError:(id *)a0;
- (BOOL)_takeAssertionForDuration:(double)a0 error:(id *)a1;

@end
