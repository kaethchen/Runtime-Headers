@class NSURL;

@interface TLSystemSound : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _soundID;
    BOOL _shouldDisposeOfSoundID;
}

@property (readonly, nonatomic) NSURL *soundFileURL;
@property (readonly, nonatomic) unsigned int soundID;
@property (readonly, nonatomic) BOOL requiresLongFormPlayback;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_description;
- (void)_ensureUnderlyingSoundCreated;
- (void)_prepareForDealloc;
- (void)beginRequiringUnderlyingSoundLoaded;
- (void)endRequiringUnderlyingSoundLoaded;
- (id)initWithSoundFileURL:(id)a0 soundID:(unsigned int)a1 requiresLongFormPlayback:(BOOL)a2;

@end
