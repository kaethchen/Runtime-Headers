@class NSString, PLPhotoLibraryIdentifier, PLPhotoLibrarySearchCriteria;

@interface PHPhotoLibraryIdentifier : NSObject <NSSecureCoding, NSCopying> {
    NSString *_uuid;
    NSString *_containerIdentifier;
    long long _domain;
}

@property (class, readonly, copy) NSString *defaultApplicationContainerIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) PLPhotoLibraryIdentifier *pl_libraryIdentifier;
@property (readonly, copy) PLPhotoLibrarySearchCriteria *librarySearchCriteria;
@property (readonly, nonatomic) NSString *archivalStringRepresentation;
@property (readonly) NSString *uuid;
@property (readonly) NSString *containerIdentifier;
@property (readonly) long long domain;
@property (readonly) NSString *bundleIdentifier;

+ (id)defaultApplicationLibraryIdentifierWithContainerIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithArchivalStringRepresentation:(id)a0;
- (id)initWithPLLibraryIdentifier:(id)a0;

@end
