@interface WorldClockPreferences : NSObject

- (BOOL)synchronize;
- (id)lastModified;
- (void)setLastModified:(id)a0;
- (id)cities;
- (void)setCities:(id)a0;
- (void)cityDataUpdated;
- (BOOL)cityDataNeedsUpdate;
- (void)clearOutCityUpdatePref;
- (BOOL)defaultCitiesAdded;
- (id)defaultsKeys;
- (void)setDefaultCitiesAdded:(BOOL)a0;

@end
