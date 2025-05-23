@interface HVPathsBase : NSObject

+ (id)filename:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)subdirectory:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)topDirectory;
+ (id)topDirectoryCreateIfNeeded:(BOOL)a0;
+ (id)topDirectoryWithName:(id)a0 createIfNeeded:(BOOL)a1;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)subdirectory:(id)a0;
+ (id)filename:(id)a0;
+ (id)filename:(id)a0 subdirectory:(id)a1 createIfNeeded:(BOOL)a2;

@end
