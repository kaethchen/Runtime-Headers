@class ITLibPlaylist;

@interface ITMediaPlaylist : ITMediaCollection {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _persistentIDList;
}

@property (readonly, nonatomic) ITLibPlaylist *itLibPlaylist;

+ (unsigned long long)MPMediaPlaylistAttributesForITLibPlaylistKind:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (void)addIdentifier:(unsigned long long)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (id)initWithITLibPlaylist:(id)a0 mediaLibrary:(id)a1;
- (id)valueForMPMediaEntityProperty:(id)a0;

@end
