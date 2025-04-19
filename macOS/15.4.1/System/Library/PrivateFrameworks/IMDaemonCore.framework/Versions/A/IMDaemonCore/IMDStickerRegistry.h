@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject

@property (retain) NSMutableDictionary *stickerPackGUIDToPackMap;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_cachedPathForStickerWithProperties:(id)a0 isAdaptiveImageGlyph:(BOOL)a1;
- (BOOL)_isRecipeBasedSticker:(id)a0;
- (void)retrieveStickerWithProperties:(id)a0 isAdaptiveImageGlyph:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
