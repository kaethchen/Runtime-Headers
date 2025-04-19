@interface ML3BaseLocation : ML3Entity

+ (id)databaseTable;
+ (BOOL)insertionChangesLibraryContents;
+ (id)newWithDictionary:(id)a0 inLibrary:(id)a1;

- (void)enumerateOrphanedAssetsUsingBlock:(id /* block */)a0;

@end
