@class NSImage, NSString;

@interface ACSHApplication : ACSHPlistObject

@property (retain, nonatomic) NSImage *_icon;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *resolvedPath;
@property (readonly, nonatomic) NSImage *icon;

+ (id)createWithItemAtPath:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_resetDisplayValues;
- (id)dictionaryForSaving;

@end
