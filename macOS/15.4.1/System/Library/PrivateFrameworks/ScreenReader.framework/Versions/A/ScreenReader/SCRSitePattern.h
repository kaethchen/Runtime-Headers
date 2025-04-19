@class NSString, NSArray;

@interface SCRSitePattern : NSObject

@property (nonatomic, setter=_setScheme:) long long _scheme;
@property (copy, nonatomic, setter=_setHost:) NSString *_host;
@property (retain, nonatomic, setter=_setHostComponents:) NSArray *_hostComponents;
@property (nonatomic, setter=_setPort:) long long _port;
@property (copy, nonatomic, setter=_setPath:) NSString *_path;
@property (retain, nonatomic, setter=_setHostComponents:) NSArray *_pathComponents;

+ (id)sitePatternStringFromURLString:(id)a0;
+ (id)displayFormattedSitePatternString:(id)a0;
+ (id)patternWithSitePatternString:(id)a0;

- (void).cxx_destruct;
- (id)initWithSitePatternString:(id)a0;
- (BOOL)patternMatchesURL:(id)a0;

@end
