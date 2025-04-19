@class NSString, NSMutableDictionary;

@interface StickerDOMProvider : DOMProvider <AssociatedMessageDOMProvider>

@property (retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdate;
@property (retain, nonatomic) NSMutableDictionary *stickerChatItemsToUpdateAfterMediaLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)fileTransferForGUID:(id)a0;
- (id)DOM;
- (id)setStickerImageSource:(id)a0 chatItem:(id)a1;
- (double)getAttribute:(id)a0 forStickerElement:(id)a1;
- (void)addChatItemToUpdateQueue:(id)a0 forElement:(id)a1 withChatItemElement:(id)a2;
- (void)compareHeightsForScalars:(id)a0 stickerSize:(struct CGSize { double x0; double x1; } *)a1 chatItemHeight:(unsigned int)a2 maxBottomMargin:(unsigned int *)a3 maxTopMargin:(unsigned int *)a4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } *)a5;
- (void)compareWidthsForScalars:(id)a0 stickerSize:(struct CGSize { double x0; double x1; } *)a1 messageTextWidth:(unsigned int)a2 maxWidthPadding:(unsigned int *)a3 fromMe:(BOOL)a4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } *)a5;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })createGeometryDescriptor:(id)a0;
- (id)createInitialStickerElementForChatItem:(id)a0;
- (double)getScaleFactor:(double)a0 stickerElement:(id)a1 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } *)a2;
- (double)getStickerHeight:(struct CGSize { double x0; double x1; } *)a0 withRadians:(double)a1;
- (id)getStickerSpacerElement:(id)a0;
- (double)getStickerWidth:(struct CGSize { double x0; double x1; } *)a0 withRadians:(double)a1;
- (BOOL)hasStickersToPlaceOnVideoElements;
- (void)parseAssociatedChatItem:(id)a0 appendToElement:(id)a1 withChatItemElement:(id)a2;
- (struct CGSize { double x0; double x1; })resolveStickersForChatItemElement:(id)a0;
- (void)setRotation:(id)a0 withRadians:(float)a1;
- (void)setStickerPosition:(id)a0 stickerSize:(struct CGSize { double x0; double x1; } *)a1 parentClientSize:(struct CGSize { double x0; double x1; } *)a2 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } *)a3;
- (void)setUpDefaultSizeForSticker:(id)a0;
- (BOOL)setUpInitialSizeProperties:(id)a0 chatItem:(id)a1 imageSourcePath:(id)a2;
- (void)transcriptDidLayOut:(id)a0;
- (void)updateStickerChatItems;
- (struct CGSize { double x0; double x1; })updateStickerSize:(id)a0 parentClientSize:(struct CGSize { double x0; double x1; } *)a1 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } *)a2;
- (void)videoElementLoadedForGUID:(id)a0;

@end
