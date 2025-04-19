@class NSArray, NSImage, NSData, GPDrawOnImageRecipe;

@interface GPRecipe : NSObject

@property (copy, nonatomic) NSData *additionalMetadata;
@property (copy, nonatomic) NSArray *promptElements;
@property (retain, nonatomic) GPDrawOnImageRecipe *drawOnImageRecipe;
@property (retain) NSImage *sourceImage;
@property BOOL sourceImageIsSketch;

- (void).cxx_destruct;
- (id)initWithEncodedRecipe:(id)a0 prompt:(id)a1 contextElements:(id)a2;
- (id)initWithEncodedRecipe:(id)a0 prompts:(id)a1 contextElements:(id)a2;
- (id)initWithPromptElements:(id)a0;
- (id)initWithPromptElements:(id)a0 sourceImage:(id)a1;

@end
