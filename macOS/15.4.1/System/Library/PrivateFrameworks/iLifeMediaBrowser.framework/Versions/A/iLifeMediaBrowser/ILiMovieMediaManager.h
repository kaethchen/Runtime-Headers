@interface ILiMovieMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)dictionaryWithProjects:(id)a0;
- (id)iMovieApplicationVersion;
- (id)iMovieFolders;
- (id)projectGroupsForPaths:(id)a0;

@end
