@class NSString, NSURL, NSDictionary;

@interface PLPhotoLibraryIdentifier : NSObject <NSSecureCoding> {
    NSDictionary *_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *uuid;
@property (readonly) NSString *containerIdentifier;
@property (readonly) long long domain;
@property (readonly) NSString *userDescription;
@property (readonly) NSURL *libraryURL;
@property (readonly) BOOL isImagePlaygroundDefaultLibraryIdentifier;

+ (id)photoLibraryIdentifierWithPhotoLibraryURL:(id)a0 createIfMissing:(BOOL)a1 error:(id *)a2;
+ (id)_addWellKnownIdentifierFromIdentifierMap:(id)a0 updateLibraryURL:(id)a1;
+ (id)_buildIdentifierMapForLibraryURL:(id)a0 containerIdentifier:(id)a1 uuid:(id)a2 name:(id)a3 userDescription:(id)a4 error:(id *)a5;
+ (id)_createPhotoLibraryIdentifierWithPhotoLibraryURL:(id)a0 containerIdentifier:(id)a1 uuid:(id)a2 name:(id)a3 userDescription:(id)a4 error:(id *)a5;
+ (id)_existingPhotoLibraryIdentifierRecordForLibraryURL:(id)a0 error:(id *)a1;
+ (BOOL)_isValidLibraryURL:(id)a0 identifierMap:(id)a1;
+ (id)_stripWellKnownIdentifierFromIdentifierMap:(id)a0;
+ (id)createPhotoLibraryIdentifierWithPhotoLibraryURL:(id)a0 containerIdentifier:(id)a1 name:(id)a2 userDescription:(id)a3 error:(id *)a4;
+ (id)createPhotoLibraryIdentifierWithPhotoLibraryURL:(id)a0 containerIdentifier:(id)a1 uuid:(id)a2 name:(id)a3 userDescription:(id)a4 error:(id *)a5;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)initWithIdentifierPayload:(id)a0;
- (BOOL)setValuesForName:(id)a0 userDescription:(id)a1 error:(id *)a2;

@end
