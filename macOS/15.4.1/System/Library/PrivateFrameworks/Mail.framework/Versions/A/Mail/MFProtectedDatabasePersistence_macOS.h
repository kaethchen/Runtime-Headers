@interface MFProtectedDatabasePersistence_macOS : EDProtectedDatabasePersistence

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;

- (BOOL)supportsJournaling;
- (BOOL)protectedDataAvailable;

@end
