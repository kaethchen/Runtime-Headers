@class NSViewController;

@interface NotesEditor.ICMSystemPaperLinkHelper : NSObject {
    void /* unknown type, empty encoding */ paperLinksViewController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ linkHelperDelegate;
}

@property (nonatomic, readonly) NSViewController *linkPopover;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)fetchLinkableItems;

@end
