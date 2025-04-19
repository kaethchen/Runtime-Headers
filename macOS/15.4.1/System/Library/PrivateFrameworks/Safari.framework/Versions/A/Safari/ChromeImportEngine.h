@class ChromeDataDirectories;

@interface ChromeImportEngine : BrowserImportEngine

@property (readonly, nonatomic) ChromeDataDirectories *dataDirectories;

- (id)initWithDataDirectories:(id)a0;

@end
