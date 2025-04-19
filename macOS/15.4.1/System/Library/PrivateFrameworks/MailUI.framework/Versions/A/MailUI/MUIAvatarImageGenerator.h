@class NSCache, EFLocked, EMMessageRepository;
@protocol EFScheduler;

@interface MUIAvatarImageGenerator : NSObject

@property (readonly, nonatomic) id<EFScheduler> avatarImageScheduler;
@property (readonly, nonatomic) id<EFScheduler> businessAvatarScheduler;
@property (retain, nonatomic) EFLocked *senderStyleCache;
@property (retain, nonatomic) NSCache *avatarCache;
@property (retain, nonatomic) NSCache *fallbackImageColorsCache;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;

+ (id)log;
+ (id)stringForStyle:(long long)a0;
+ (void)roundAvatarView:(id)a0 withBorder:(BOOL)a1 size:(double)a2;

- (void).cxx_destruct;
- (id)_businessAvatarImageForContext:(id)a0 handler:(id /* block */)a1;
- (void)_businessLogoForContext:(id)a0 handler:(id /* block */)a1;
- (void)_configureBusinessQueryService;
- (void)allowGeneratingAvatarImages;
- (id)avatarImageForContext:(id)a0 handler:(id /* block */)a1;
- (id)initWithMessageRepository:(id)a0;
- (long long)test_avatarStyleForContext:(id)a0;

@end
