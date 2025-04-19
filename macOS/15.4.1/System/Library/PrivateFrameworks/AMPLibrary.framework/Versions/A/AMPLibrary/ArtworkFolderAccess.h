@class NSURL;

@interface ArtworkFolderAccess : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL didStartAccess;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 andExtension:(id)a1;

@end
