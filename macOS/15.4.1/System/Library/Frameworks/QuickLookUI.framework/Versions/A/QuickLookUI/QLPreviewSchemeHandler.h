@class NSURL, NSImage;
@protocol QLPreviewItem;

@interface QLPreviewSchemeHandler : NSObject {
    id<QLPreviewItem> _item;
    NSImage *_icon;
    long long _iconInitializationToken;
}

@property (readonly) id<QLPreviewItem> previewItem;
@property (readonly) NSURL *URL;
@property (readonly) NSURL *launchURL;
@property (readonly) int seamlessOpeningSupport;
@property (readonly) NSImage *icon;

+ (void)initialize;
+ (BOOL)isURLReachable:(id)a0;
+ (void)registerHandlerClass:(Class)a0 forScheme:(id)a1;
+ (id)_handlerClassForURL:(id)a0;
+ (id)_handlerForScheme:(id)a0 item:(id)a1;
+ (id)_handlerForURL:(id)a0 item:(id)a1;
+ (id)handlerForPreviewItem:(id)a0;

- (void).cxx_destruct;
- (void)calculatePreviewURL:(id *)a0 previewData:(id *)a1 previewProperties:(id *)a2 previewType:(id *)a3;
- (struct CGImage { } *)createImageForMaximumSize:(struct CGSize { double x0; double x1; })a0 options:(struct __CFDictionary { } *)a1;
- (id)_getIcon;
- (struct CGImage { } *)createImageFromIconForMaximumSize:(struct CGSize { double x0; double x1; })a0;
- (id)filteredControlsFromControls:(id)a0;
- (id)initWithPreviewItem:(id)a0;

@end
