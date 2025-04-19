@class NSBundle;

@interface BrowserDataDirectories : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSBundle *browserBundle;
@property (readonly, nonatomic) Class bookmarkImportEngineClass;
@property (readonly, nonatomic) Class credentialImporterClass;
@property (readonly, nonatomic) Class historyImporterClass;

+ (id)browserDataDirectoriesForBundle:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBrowserBundle:(id)a0;

@end
