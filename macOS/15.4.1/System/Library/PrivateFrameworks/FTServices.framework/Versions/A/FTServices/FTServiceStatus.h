@interface FTServiceStatus : NSObject

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) BOOL blockPost;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;

+ (id)sharedInstance;

- (void)dealloc;
- (void)_removeObservers;
- (id)initPrivate;
- (void)_addObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_reload;

@end
