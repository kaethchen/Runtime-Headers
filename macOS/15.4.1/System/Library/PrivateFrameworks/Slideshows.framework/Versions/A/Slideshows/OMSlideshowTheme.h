@class NSString, NSArray;

@interface OMSlideshowTheme : NSObject

@property (readonly) NSString *pluginIdentifier;
@property (readonly) NSArray *specificGuidelines;
@property (readonly) unsigned long long type;
@property (readonly) NSString *themeID;
@property (readonly) NSString *localizedName;
@property (readonly) NSArray *audioFilePaths;
@property (readonly) BOOL supportsFitsToMusic;
@property (readonly) BOOL supportsSetDuration;
@property (readonly) BOOL supportsSetPerPageDuration;
@property (readonly) BOOL supportsCustomTransitions;
@property (readonly) BOOL supportsScaleToFitOrFill;
@property (readonly) BOOL supportsCustomKenBurns;
@property (readonly) BOOL supportsCaptions;
@property (readonly) NSArray *supportedCustomTransitions;

- (void)dealloc;
- (id)description;
- (struct CGImage { } *)thumbnailWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMarimbaStyleID:(id)a0;
- (id)initWithOpusPluginIdentifier:(id)a0;
- (id)initWithThemeID:(id)a0 localizedName:(id)a1 specificGuidelines:(id)a2 andOpusPluginIdentifier:(id)a3;
- (BOOL)supportsCustomTransitionID:(id)a0;

@end
