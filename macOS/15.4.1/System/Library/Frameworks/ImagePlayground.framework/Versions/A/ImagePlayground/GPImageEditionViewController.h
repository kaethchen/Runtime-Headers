@class NSString, GPRecipe, _TtC15ImagePlayground29ImagePlaygroundViewController, NSImage, NSArray;
@protocol GPImageEditionViewControllerDelegate;

@interface GPImageEditionViewController : NSViewController <ImageGenerationViewControllerDelegate, ImagePlayground.ImageGenerationViewControllerPrivateDelegate, GPImageEditionViewControllerProtocol>

@property (class, readonly, getter=isAvailable) BOOL available;

@property (retain, nonatomic) _TtC15ImagePlayground29ImagePlaygroundViewController *generationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long style;
@property (retain) GPRecipe *recipe;
@property BOOL isLoadingRecipe;
@property (retain) NSImage *sourceImage;
@property BOOL sourceImageIsSketch;
@property (retain) NSArray *generatedAssets;
@property (readonly) NSString *localizedCreateButtonTitle;
@property (weak) id<GPImageEditionViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)setStyle:(long long)a0;
- (id)initWithStyle:(long long)a0;
- (void)imageEditionViewController:(id)a0 didCreate:(id)a1;
- (void)imageGenerationViewControllerWantsToShowGrid:(id)a0;
- (void)imagePlaygroundViewController:(id)a0 didCreateImageAt:(id)a1;
- (void)imagePlaygroundViewControllerDidCancel:(id)a0;

@end
