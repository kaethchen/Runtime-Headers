@class NSString;

@interface OSIOSVersion : NSObject

@property long long versionMajor;
@property long long versionMinor;
@property long long versionPatch;
@property (retain) NSString *versionString;
@property (retain) NSString *buildNumber;

- (void).cxx_destruct;

@end
