@class NSURL;

@interface ITLibMediaItemData : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *securityScopedURL;
@property (nonatomic) unsigned long long playlistCount;
@property (nonatomic) BOOL downloadable;

- (id)init;
- (void).cxx_destruct;

@end
