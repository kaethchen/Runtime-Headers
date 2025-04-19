@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudOwnerEmail;
- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudOwnerFirstName;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudOwnerLastName;

@end
