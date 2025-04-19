@class NSString;

@interface BuildVersion : NSObject {
    unsigned int _buildID;
    NSString *_buildVersion;
    NSString *_majorBuildVersion;
    int _updaterID;
    NSString *_revisionBuildVersion;
    NSString *_buildNumber;
}

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)buildVersion;
- (unsigned int)buildID;
- (id)initWithBuildVersion:(id)a0;
- (id)initWithBuildID:(unsigned int)a0;
- (BOOL)parseBuildVersion;
- (id)userVisibleString;

@end
