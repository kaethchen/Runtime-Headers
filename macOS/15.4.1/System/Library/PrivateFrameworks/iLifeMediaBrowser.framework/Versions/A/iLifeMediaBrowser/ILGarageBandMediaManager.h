@interface ILGarageBandMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (void)_durationOfGBProjectAtPath:(id)a0;
- (id)garageBandApplicationVersion;
- (id)garageBandFolders;

@end
