@class NSString;

@interface ImagePlayground.ImagePlaygroundViewController : NSViewController {
    void /* unknown type, empty encoding */ __promptElements;
    void /* unknown type, empty encoding */ allowedGenerationStyles;
    void /* unknown type, empty encoding */ selectedGenerationStyle;
    void /* unknown type, empty encoding */ personalizationPolicy;
    void /* unknown type, empty encoding */ resultingAssets;
    void /* unknown type, empty encoding */ localizedCreateButtonTitle;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ imageEditionView;
    void /* unknown type, empty encoding */ imageEditionViewController;
    void /* unknown type, empty encoding */ concepts;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic, retain) void /* unknown type, empty encoding */ sourceImage;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic, retain) void /* unknown type, empty encoding */ privateDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ sourceImageIsSketch;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ recipe;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)editorDidCancelWithRequiresShowingGrid:(BOOL)a0;
- (void)editorDidGenerateAssets:(id)a0;

@end
