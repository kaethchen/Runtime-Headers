@protocol CNUILikenessRendering, CNSchedulerProvider, CNAvatarImageProvider, CNUIPRLikenessResolver, CNKeyDescriptor;

@interface CNAvatarImageRenderer : NSObject

@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) id<CNUILikenessRendering> renderer;
@property (readonly, nonatomic) id<CNUIPRLikenessResolver> resolver;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNAvatarImageProvider> placeholderImageProvider;

- (id)init;
- (void).cxx_destruct;
- (id)avatarImageForContacts:(id)a0 scope:(id)a1;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 includePlaceholder:(BOOL)a2 imageHandler:(id /* block */)a3;
- (id)initWithLikenessRenderer:(id)a0 likenessResolver:(id)a1 schedulerProvider:(id)a2;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 imageHandler:(id /* block */)a2;
- (id)renderAvatarsForContacts:(id)a0 scope:(id)a1 includePlaceholder:(BOOL)a2 workScheduler:(id)a3 imageHandler:(id /* block */)a4;
- (id)renderMonogramForString:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)renderMonogramForString:(id)a0 scope:(id)a1 imageHandler:(id /* block */)a2;
- (id)renderedLikenessesForContacts:(id)a0 scope:(id)a1 placeholder:(BOOL)a2 workScheduler:(id)a3;
- (id)renderedMonogramObservableForString:(id)a0 scope:(id)a1;
- (id)runScopeBasedImageObservable:(id /* block */)a0 scope:(id)a1 imageHandler:(id /* block */)a2;

@end
