@class NSDictionary, NSURL, NSString;

@interface PLLibraryOpenerCreationOptions : NSObject {
    BOOL _hasCustomUUID;
}

@property (readonly, nonatomic) NSDictionary *internalTestOptions;
@property (readonly, nonatomic) NSURL *libraryBundleURL;
@property (readonly, nonatomic) BOOL hasCustomUUID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long domain;
@property (readonly, nonatomic) NSString *libraryName;
@property (readonly, nonatomic) NSString *userDescription;
@property (readonly, nonatomic) NSDictionary *createDatabaseOptionsDictionary;

+ (long long)resolvePhotoLibraryDomainWithOptionsDictionary:(id)a0;
+ (BOOL)validateContinerIdentifier:(id)a0 connectionAuthorization:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0 connectionAuthorization:(id)a1;
- (id)initWithWellKnownLibraryIdentifier:(long long)a0;

@end
