@class NSNumber, NSString, NSImage, CKStoreClient, NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ASWriteReviewConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long readyState;
@property (retain, nonatomic) NSMutableArray *readyCallbacks;
@property (retain, nonatomic) NSImage *resizedAppIcon;
@property (readonly, nonatomic) NSNumber *adamId;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSImage *appIcon;
@property (readonly, nonatomic) BOOL skipRating;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, nonatomic) CKStoreClient *storeClient;
@property (retain, nonatomic) NSNumber *rating;
@property (copy, nonatomic) NSString *reviewTitle;
@property (copy, nonatomic) NSString *reviewBody;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSURL *ratingURL;
@property (retain, nonatomic) NSURL *writeReviewURL;
@property (retain, nonatomic) NSURL *saveReviewURL;

+ (id)resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)performWhenReady:(id /* block */)a0;
- (void)performURLFetch;
- (id)initWithAdamId:(id)a0 appName:(id)a1 appIcon:(id)a2 skipRating:(BOOL)a3 storeClient:(id)a4;
- (void)transitionToReadyAndInvokeCallbacks;

@end
