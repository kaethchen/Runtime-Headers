@class NSURL, NSNumber, NSDate;

@interface XProtectUpdateBundle : NSObject {
    NSURL *_resourcesURL;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSDate *installationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)getResource:(id)a0;
- (id)getResourcesOfType:(unsigned long long)a0;
- (id)supplementalYARAFilesInDirectory:(id)a0;

@end
