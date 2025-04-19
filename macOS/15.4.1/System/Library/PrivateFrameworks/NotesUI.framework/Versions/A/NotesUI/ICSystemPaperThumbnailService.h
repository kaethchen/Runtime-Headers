@class UITraitCollection, ICSystemPaperThumbnailServiceInternal;

@interface ICSystemPaperThumbnailService : NSObject

@property (class, readonly, nonatomic) ICSystemPaperThumbnailService *sharedService;

@property (retain, nonatomic) ICSystemPaperThumbnailServiceInternal *systemPaperThumbnailService;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)observe;
- (id)initWithSystemPaperThumbnailService:(id)a0;
- (void)invalidateForNote:(id)a0;
- (void)updateIfNeededForNote:(id)a0 completion:(id /* block */)a1;
- (void)updateIfNeededWithCompletion:(id /* block */)a0;

@end
