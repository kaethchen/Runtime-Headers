@class NSDocumentRevisionsStackLayer, NSFileVersion, NSDocumentRevisionsPlaceholderView;

@interface NSDocumentRevisionsStackItem : NSObject {
    NSDocumentRevisionsPlaceholderView *_placeholderView;
}

@property (retain) NSFileVersion *version;
@property BOOL hasLocalData;
@property (retain) NSDocumentRevisionsPlaceholderView *placeholderView;
@property (retain) NSDocumentRevisionsStackLayer *layer;
@property BOOL hasValidSnapshot;
@property BOOL hasWindowVisible;
@property BOOL documentFailedToLoad;

+ (id)itemWithVersion:(id)a0;

- (void).cxx_destruct;
- (void)_setupLayerAsPlaceholder:(BOOL)a0;
- (void)applyParameters:(id)a0;

@end
