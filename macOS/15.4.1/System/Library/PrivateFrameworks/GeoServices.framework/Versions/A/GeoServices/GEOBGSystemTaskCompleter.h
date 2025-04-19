@class BGSystemTask;

@interface GEOBGSystemTaskCompleter : NSObject {
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _completed;
}

@property (readonly, nonatomic) BGSystemTask *task;
@property (copy, nonatomic) id /* block */ completion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)complete;
- (id)initWithTask:(id)a0;

@end
