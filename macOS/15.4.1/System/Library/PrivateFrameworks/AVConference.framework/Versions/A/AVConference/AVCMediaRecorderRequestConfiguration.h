@class NSString, NSURL;

@interface AVCMediaRecorderRequestConfiguration : NSObject

@property (nonatomic) unsigned char mediaType;
@property (nonatomic) unsigned char requestMode;
@property (copy, nonatomic) NSString *requesteeID;
@property (copy, nonatomic) NSURL *stillImageURL;
@property (copy, nonatomic) NSURL *movieURL;
@property (copy, nonatomic) NSURL *directoryURL;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;

- (void)dealloc;
- (id)description;
- (id)init;

@end
