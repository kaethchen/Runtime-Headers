@interface _ICNFIMAPLibraryIDDetails : ICNFIMAPMessageDetails {
    long long _libraryID;
}

- (id)description;
- (long long)libraryID;
- (void)setLibraryID:(long long)a0;
- (char)persistentIDType;

@end
