@class NSArray, NSImage, GPRecipe, NSString;

@interface GPInProcessImageEditionViewController : NSViewController <GPImageEditionViewControllerProtocol> {
    void /* unknown type, empty encoding */ generatedAssets;
    void /* unknown type, empty encoding */ localizedCreateButtonTitle;
    void /* unknown type, empty encoding */ servicesFetcher;
    void /* unknown type, empty encoding */ imageEditionViewController;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic, copy) NSArray *generatedAssets;
@property (nonatomic, retain) NSImage *sourceImage;
@property (nonatomic) BOOL isLoadingRecipe;
@property (nonatomic, retain) GPRecipe *recipe;
@property (nonatomic) void /* unknown type, empty encoding */ sourceImageIsSketch;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ appleConnectTokenProvider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithStyle:(long long)a0;

@end
