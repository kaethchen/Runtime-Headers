@class NSArray, NSViewController;
@protocol LSOpenWithMenuDelegate;

@interface LSOpenWithMenuConstructor : NSObject {
    struct Options { unsigned char forDefaultHandlerSelection : 1; unsigned char showAppStoreMenuItem : 1; unsigned char showOtherMenuItem : 1; unsigned char allowMenuWithNoApplications : 1; unsigned char otherPanelAlwaysModal : 1; unsigned char stronglyBoundApplicationIncluded : 1; unsigned char universalLinksIncluded : 1; struct { unsigned char showDebugInfo : 1; unsigned char alwaysFailToBind : 1; unsigned char useUnlocalizedAppNames : 1; } internal; } _options;
}

@property (copy, nonatomic) NSArray *URLs;
@property (copy, nonatomic) NSArray *contentTypes;
@property (nonatomic) BOOL showAppStoreMenuItem;
@property (nonatomic) BOOL showOtherMenuItem;
@property (nonatomic) BOOL allowMenuWithNoApplications;
@property (nonatomic, getter=isOtherPanelAlwaysModal) BOOL otherPanelAlwaysModal;
@property (nonatomic, getter=isStronglyBoundApplicationIncluded) BOOL stronglyBoundApplicationIncluded;
@property (nonatomic, getter=areUniversalLinksIncluded) BOOL universalLinksIncluded;
@property (nonatomic) unsigned int rolesMask;
@property (retain, nonatomic) NSViewController *otherPanelAccessoryViewController;
@property (weak, nonatomic) id<LSOpenWithMenuDelegate> delegate;
@property (copy, nonatomic) id /* block */ selectionHandler;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initForPurpose:(long long)a0;
- (id)_initWithOptions:(const struct Options { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x7; } *)a0;
- (id)constructMenuItemsReturningError:(id *)a0;
- (id)initForContextualApplicationSelection;
- (id)initForDefaultApplicationSelection;

@end
