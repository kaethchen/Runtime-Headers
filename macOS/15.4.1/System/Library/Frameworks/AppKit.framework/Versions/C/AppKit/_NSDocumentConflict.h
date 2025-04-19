@class NSDocumentConflictPanelController, NSFileVersion, NSImage;

@interface _NSDocumentConflict : NSObject {
    BOOL _selected;
    struct __QLThumbnail { } *_thumbnailRef;
}

@property (weak) NSDocumentConflictPanelController *controller;
@property (retain) NSFileVersion *version;
@property (getter=isSelected) BOOL selected;
@property (copy) NSImage *thumbnail;
@property BOOL showName;
@property BOOL documentIsShared;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)nameAndDateText;
- (id)originText;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 force:(BOOL)a2;

@end
