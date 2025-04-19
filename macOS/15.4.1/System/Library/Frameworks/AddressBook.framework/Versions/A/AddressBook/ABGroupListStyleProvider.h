@class NSString;

@interface ABGroupListStyleProvider : NSObject <ABGroupListStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleProvider;

- (id)directoryString;
- (id)accountIcon;
- (id)directoryIcon;
- (id)folderIcon;
- (id)groupIcon;
- (id)lastImportIcon;
- (id)smartGroupIcon;

@end
