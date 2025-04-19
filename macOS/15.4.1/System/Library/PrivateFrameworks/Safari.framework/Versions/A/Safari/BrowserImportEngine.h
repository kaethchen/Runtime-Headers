@class BrowserDataDirectories;

@interface BrowserImportEngine : NSObject

@property (readonly, nonatomic) BrowserDataDirectories *dataDirectories;

- (void).cxx_destruct;
- (id)initWithDataDirectories:(id)a0;

@end
