@class SFUIAvatarImageRenderer, NSImage, NSObject;
@protocol OS_dispatch_queue;

@interface SFUIPeopleSuggestionImageProvider : SFUIImageProvider

@property (readonly, nonatomic) SFUIAvatarImageRenderer *imageRenderer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *placeholderImageQueue;
@property (readonly, nonatomic) NSImage *processedPlaceholderImage;
@property (readonly, nonatomic) NSImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) unsigned long long layoutDirection;

- (void).cxx_destruct;
- (void)_deliverIconImage:(id)a0 identifier:(id)a1 isUTI:(BOOL)a2 error:(id)a3;
- (void)_fetchAvatarImageForPeopleSuggestion:(id)a0;
- (BOOL)_fetchNoAppTransportImageForIdentifier:(id)a0;
- (void)_fetchTransportImageForPeopleSuggestion:(id)a0;
- (void)_processPlaceholderImage;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0 layoutDirection:(unsigned long long)a1;
- (void)performImageRequest:(id)a0;
- (int)requestAvatarImageForPeopleSuggestion:(id)a0 resultHandler:(id /* block */)a1;
- (int)requestTransportImageForPeopleSuggestion:(id)a0 resultHandler:(id /* block */)a1;
- (void)updateTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
