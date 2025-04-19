@class ITLibMediaItem;

@interface ITMediaItem : ITMediaEntity {
    unsigned long long _nameOrder;
    unsigned long long _albumOrder;
    unsigned long long _artistOrder;
    unsigned long long _genreOrder;
    unsigned long long _composerOrder;
    unsigned long long _albumArtistOrder;
}

@property (readonly, nonatomic) ITLibMediaItem *itLibMediaItem;

+ (unsigned long long)MPMediaTypeForITLibMediaItemMediaKind:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)defaultValueForProperty:(id)a0 isKnownProperty:(BOOL *)a1;
- (id)fallbackPropertyForITLibraryProperty:(id)a0;
- (id)initWithITLibMediaItem:(id)a0 mediaLibrary:(id)a1;
- (id)propertyForMPMediaEntityProperty:(id)a0;
- (id)valueForMPMediaEntityProperty:(id)a0;

@end
