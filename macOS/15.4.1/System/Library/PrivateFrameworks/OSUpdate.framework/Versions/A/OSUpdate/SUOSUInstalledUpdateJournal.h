@interface SUOSUInstalledUpdateJournal : NSObject

+ (id)sharedJournal;

- (id)init;
- (void)addProductsToInstalledUpdateJournal:(id)a0;
- (void)addDescriptorsToInstalledUpdateJournal:(id)a0;

@end
