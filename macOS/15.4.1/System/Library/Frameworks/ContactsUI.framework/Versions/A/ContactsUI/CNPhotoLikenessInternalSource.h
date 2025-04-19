@class NSArray, NSString, NSImage;

@interface CNPhotoLikenessInternalSource : NSObject <NSObject, CNPhotoLikenessSource>

@property (readonly) NSArray *childGroups;
@property (readonly) NSString *name;
@property (readonly) NSImage *iconImage;
@property (readonly, copy) NSString *mediaSourceIdentifier;
@property (readonly) id parent;
@property (readonly) long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaObjects;

@end
