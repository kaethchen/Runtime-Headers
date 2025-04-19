@class NSObject, MCMontage, MCAudioPlaylist, NSMutableDictionary, MPPlaylistInternal, MCPlug, NSMutableArray;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_songs;
    MCAudioPlaylist *_audioPlaylist;
    MCPlug *_plug;
    NSObject<MPAudioSupport> *_parentObject;
    MCMontage *_montage;
    NSMutableDictionary *_attributes;
    MPPlaylistInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double fadeInDuration;
@property double fadeOutDuration;
@property double duckInDuration;
@property double duckOutDuration;
@property double duckLevel;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)audioPlaylist;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (void)setDuration:(double)a0;
- (void)setParentObject:(id)a0;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)montage;
- (id)parentObject;
- (void)setMontage:(id)a0;
- (id)parentDocument;
- (id)songs;
- (id)audioPlaylist;
- (double)duckOutDuration;
- (void)addSong:(id)a0;
- (void)addSongs:(id)a0;
- (void)copySongs:(id)a0;
- (void)copyStruct:(id)a0;
- (long long)countOfSongs;
- (double)duckInDuration;
- (double)duckLevel;
- (void)insertObject:(id)a0 inSongsAtIndex:(long long)a1;
- (void)insertSongs:(id)a0 atIndex:(long long)a1;
- (void)moveSongsFromIndices:(id)a0 toIndex:(long long)a1;
- (id)objectInSongsAtIndex:(long long)a0;
- (void)removeAllSongs;
- (void)removeObjectFromSongsAtIndex:(long long)a0;
- (void)removeSongsAtIndices:(id)a0;
- (void)replaceObjectInSongsAtIndex:(long long)a0 withObject:(id)a1;
- (void)setAudioPlaylist:(id)a0;
- (void)setDuckInDuration:(double)a0;
- (void)setDuckLevel:(double)a0;
- (void)setDuckOutDuration:(double)a0;
- (void)setPlug:(id)a0;

@end
