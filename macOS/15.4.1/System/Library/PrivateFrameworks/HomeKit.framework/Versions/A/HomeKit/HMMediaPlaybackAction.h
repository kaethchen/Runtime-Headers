@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMMediaPlaybackAction : HMAction <NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSSet *_mediaProfiles;
    long long _state;
    NSNumber *_volume;
    MPPlaybackArchive *_playbackArchive;
}

@property (readonly, copy, nonatomic) NSSet *mediaProfiles;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSNumber *volume;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithProtoBuf:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)_handleUpdates:(id)a0;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)_serializeForAdd;
- (BOOL)_updateWithSerializedAction:(id)a0 home:(id)a1;
- (id)encodeAsProtoBuf;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithMediaProfiles:(id)a0 playbackState:(long long)a1 volume:(id)a2 playbackArchive:(id)a3;
- (BOOL)isAffectedByEndEvents;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)updateWithAction:(id)a0 completionHandler:(id /* block */)a1;

@end
