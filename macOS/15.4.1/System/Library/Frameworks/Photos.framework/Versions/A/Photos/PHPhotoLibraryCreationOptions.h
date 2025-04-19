@class NSURL, NSString;

@interface PHPhotoLibraryCreationOptions : NSObject <NSCopying> {
    NSString *_containerIdentifier;
}

@property (copy) NSURL *libraryURL;
@property unsigned long long internalCreateOptions;
@property (copy) NSString *containerIdentifier;
@property (copy) NSString *identifierUUID;
@property (copy) NSString *userDescription;
@property (copy) NSString *uuid;
@property long long domain;
@property (copy) NSString *applicationGroupIdentifier;

+ (id)creationOptionsForApplicationLibraryWithContainerIdentifier:(id)a0;
+ (id)creationOptionsForDefaultApplicationLibraryWithContainerIdentifier:(id)a0;
+ (id)creationOptionsForUserLibrary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
