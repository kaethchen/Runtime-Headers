@class NSString, NSNumber, NSMutableDictionary;

@interface MLMovieArtist : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *ITunesStoreIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (void)_setValueCopy:(id)a0 forKey:(id)a1;
- (id)copyMovieArtistDictionary;
- (id)initWithMovieArtistDictionary:(id)a0;

@end
