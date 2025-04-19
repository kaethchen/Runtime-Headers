@class NSString, NSWindowController;

@interface CNLikenessEditorPresentationSheetStrategy : NSObject <CNLikenessEditorPresentationStrategy>

@property (retain) NSWindowController *sheetWindowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategy;

@end
