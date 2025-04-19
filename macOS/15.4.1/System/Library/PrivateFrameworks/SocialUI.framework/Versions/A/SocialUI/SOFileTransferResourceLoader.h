@class NSObject, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SOFileTransferResourceLoader : NSObject

@property (retain) NSMutableDictionary *imageGUIDToScaledDownPath;
@property (retain) NSMutableSet *imageGUIDsWritingToDisk;
@property (retain) NSMutableSet *imageGUIDsNotWorthScaling;
@property (retain) NSObject<OS_dispatch_queue> *scalingQueue;
@property (retain, nonatomic) NSMutableDictionary *passURLToPKPassMap;
@property (retain, nonatomic) NSMutableDictionary *passGUIDToURLMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapLoadingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapVariableQueue;
@property (retain, nonatomic) NSMutableDictionary *loadingMapFileURLToSemaphore;
@property (retain, nonatomic) NSMutableDictionary *fileURLToMapURLMap;
@property (retain, nonatomic) NSMutableDictionary *mapURLtoRenderedImageMap;
@property (retain, nonatomic) NSMutableDictionary *mapGUIDtoMapFileURLMap;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)CIImageWithOrientation:(id)a0;
- (id)scaledImagePathForFileTransfer:(id)a0;
- (void)_blurImageFileTransfer:(id)a0 toMaxSize:(double)a1 saveToLocation:(id)a2 blocking:(BOOL)a3;
- (id)_blurredImageGUID:(id)a0;
- (id)_mapFromFileURL:(id)a0;
- (void)_scaleImageFileTransfer:(id)a0 toMaxSize:(double)a1 saveToLocation:(id)a2;
- (void)assignFileTransferGUID:(id)a0 toFileURL:(id)a1;
- (id)blurredImagePathForFileTransfer:(id)a0;
- (id)loadPassAtURL:(id)a0;
- (id)loadPassForGUID:(id)a0 atURL:(id)a1;
- (BOOL)mapsGeneratedForGUID:(id)a0;
- (BOOL)mapsGeneratedForMapFileURL:(id)a0;
- (id)passForGUID:(id)a0;
- (void)postMapLoadComplete:(id)a0;
- (id)renderedMapImageForGUID:(id)a0;
- (id)renderedMapImageForMapFileURL:(id)a0;

@end
