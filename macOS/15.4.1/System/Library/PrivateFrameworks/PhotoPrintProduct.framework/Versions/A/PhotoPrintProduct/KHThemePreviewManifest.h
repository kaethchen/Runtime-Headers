@class NSMutableDictionary, NSSet, NSURL, NSDate, NSString, NSNumber;

@interface KHThemePreviewManifest : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSMutableDictionary *manifest;
@property (readonly, nonatomic) NSDate *compilationDate;
@property (readonly, nonatomic) NSSet *themePreviewIdentifiers;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *packageIdentifier;
@property (readonly, nonatomic) NSNumber *catalogVersion;
@property (readonly, nonatomic) NSNumber *version;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;

@end
