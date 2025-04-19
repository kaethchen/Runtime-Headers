@class MLMediaObjectImpl, NSString, NSDictionary, NSURL, NSDate, MLMediaLibrary, NSImage;

@interface MLMediaObject : NSObject {
    MLMediaObjectImpl *_impl;
}

@property (readonly) MLMediaLibrary *mediaLibrary;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *mediaSourceIdentifier;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly) unsigned long long mediaType;
@property (readonly, copy) NSString *contentType;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *originalURL;
@property (readonly) unsigned long long fileSize;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSURL *thumbnailURL;
@property (readonly, copy) NSImage *artworkImage;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (void)setAttributes:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)_unboxFaceTileURLsInDictionary:(id)a0;
- (id)initWithMediaLibrary:(id)a0 attributes:(id)a1;
- (void)nullOutLibraryPointer;
- (void)privateSetAttributes:(id)a0 calledFromInit:(BOOL)a1;

@end
