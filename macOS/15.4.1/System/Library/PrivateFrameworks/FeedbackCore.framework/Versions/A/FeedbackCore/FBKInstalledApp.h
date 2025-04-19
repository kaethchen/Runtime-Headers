@class NSString, NSDate;

@interface FBKInstalledApp : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSDate *lastUsed;
@property (retain, nonatomic) NSString *path;

+ (id)_searchIdentifierInAppURL:(id)a0;
+ (id)_searchVersionInAppURL:(id)a0 identifier:(id)a1;
+ (id)appWithUrl:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)isAppleApp;
- (BOOL)_isInstalledIn:(id)a0;
- (BOOL)isIWorkApp;
- (BOOL)isInstalledIn:(unsigned long long)a0;

@end
