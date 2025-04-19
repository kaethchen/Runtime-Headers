@class NSString;

@interface UNCNotificationSettingsPersistentStore : NSObject

@property (readonly) NSString *dataDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (id)readSectionInfo;
- (id)_clearedSectionsPath;
- (id)_sectionInfoLegacyPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (BOOL)hasSectionInfoLegacyFile;
- (id)initWithDataDirectoryPath:(id)a0;
- (id)readClearedSections;
- (id)readSectionInfoLegacy;
- (id)readSectionInfoWithVersionNumberForMigration;
- (id)readSectionOrder;
- (void)writeClearedSections:(id)a0;
- (void)writeSectionInfo:(id)a0;
- (void)writeSectionOrder:(id)a0;

@end
