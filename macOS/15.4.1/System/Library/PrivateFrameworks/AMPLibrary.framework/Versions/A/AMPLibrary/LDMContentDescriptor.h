@interface LDMContentDescriptor : NSObject <NSCopying, NSSecureCoding> {
    struct DBContentDescriptor { unsigned char kind; struct DBContentIdentifiers { struct ITString { void *mUTF16Data; void *mUTF8Data; } cloudUniversalLibraryID; struct ITString { void *mUTF16Data; void *mUTF8Data; } socialProfileID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeCloudAlbumID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeCloudID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storePurchasedAdamID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeAdamID; struct ITString { void *mUTF16Data; void *mUTF8Data; } libraryItemID; struct ITString { void *mUTF16Data; void *mUTF8Data; } utsItemID; struct ITString { void *mUTF16Data; void *mUTF8Data; } rentalID; } identifiers; } _contentDescriptor;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)init:(const void *)a0;
- (void *)contentDescriptor;

@end
