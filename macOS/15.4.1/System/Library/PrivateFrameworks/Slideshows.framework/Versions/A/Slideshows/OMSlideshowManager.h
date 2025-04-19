@class NSString, OFNSOperationQueue;

@interface OMSlideshowManager : NSObject <OKMediaManagerDelegate> {
    OFNSOperationQueue *_operationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (void)overrideNSDocumentControllerToAvoidAutomaticRecentDocumentRegistering;

- (void)dealloc;
- (id)init;
- (void)cancelSlideshowOperationWithID:(unsigned long long)a0;
- (id)allThemes;
- (id)mediaURLForMediaObject:(id)a0;
- (id)mediaURLsForMediaObjects:(id)a0;
- (unsigned long long)runOperation:(id)a0 withPriority:(long long)a1;
- (unsigned long long)slideshowWithTheme:(id)a0 mediaURLs:(id)a1 mediaItemLookupDelegate:(id)a2 attributes:(id)a3 progressHandler:(id /* block */)a4 resultHandler:(id /* block */)a5;
- (id)themeForID:(id)a0;

@end
