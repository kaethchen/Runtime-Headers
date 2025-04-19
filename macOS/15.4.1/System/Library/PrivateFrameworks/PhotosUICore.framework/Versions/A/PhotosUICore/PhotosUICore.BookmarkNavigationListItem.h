@class NSString, PXProgrammaticNavigationDestination;

@interface PhotosUICore.BookmarkNavigationListItem : PXNavigationListItem {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ _glyphImageName;
    void /* unknown type, empty encoding */ _destination;
}

@property (nonatomic, readonly) NSString *glyphImageName;
@property (nonatomic, readonly) PXProgrammaticNavigationDestination *destination;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2 containerIdentifier:(id)a3;

@end
