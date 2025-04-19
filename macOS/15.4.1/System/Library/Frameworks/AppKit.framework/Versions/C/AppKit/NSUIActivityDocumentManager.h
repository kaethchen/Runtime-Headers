@interface NSUIActivityDocumentManager : NSObject

+ (id)sharedManager;

- (void)documentDidChangeFileType:(id)a0;
- (void)documentDidChangeFileURL:(id)a0;
- (BOOL)documentIsUbiquitous:(id)a0;
- (void)documentWasCreated:(id)a0;
- (void)updateAutomaticUserActivityForDocument:(id)a0;
- (BOOL)userActivityIsAutomaticForDocument:(id)a0;
- (id)userActivityTypeForDocument:(id)a0;

@end
