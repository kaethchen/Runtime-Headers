@class NSArray;

@interface TSDMovieFingerprint : TSCKSosBase <NSCopying> {
    int _versionMajor;
    int _versionMinor;
    int _versionPatch;
}

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) unsigned long long version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;
- (id)initFromMessage:(const void *)a0 unarchiver:(id)a1;
- (id)initWithTracks:(id)a0;
- (id)initWithTracks:(id)a0 version:(unsigned long long)a1;

@end
