@class NSDate, NSString, NSArray, NSURL, NSDictionary, NSImage, MLMediaGroupImpl, MLMediaLibrary;

@interface MLMediaGroup : NSObject {
    MLMediaGroupImpl *_impl;
}

@property (readonly) MLMediaLibrary *mediaLibrary;
@property (readonly) MLMediaGroup *parent;
@property (readonly, copy) NSString *mediaSourceIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *typeIdentifier;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly, copy) NSArray *childGroups;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSImage *iconImage;
@property (readonly, copy) NSArray *mediaObjects;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (void)setAttributes:(id)a0;
- (void)setChildGroups:(id)a0;
- (id)initWithMediaLibrary:(id)a0 attributes:(id)a1 parent:(id)a2;
- (void)nullOutLibraryPointer;
- (void)privateSetAttributes:(id)a0 calledFromInit:(BOOL)a1;
- (void)privateSetMediaObjects:(id)a0 startTime:(id)a1;
- (void)setMediaObjects:(id)a0;
- (void)xpcConnectionWasInterrupted;

@end
