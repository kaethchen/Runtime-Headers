@class NSString, NSBundle;

@interface NSColorListAuxiliary : NSObject {
    NSString *_localizedCopyRightString;
    struct CMNamedColorPageInfoType { unsigned int x0; unsigned int x1; unsigned int x2; struct CMNamedColorPageInfoEntryType { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3[3]; } x3[1]; } *_cmPageInfoPtr;
    double _lastEditableCheck;
    NSBundle *_bundleForColorListDirectory;
}

- (void)dealloc;
- (id)init;

@end
