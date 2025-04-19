@class PHAsset, SFShowPhotosOneUpViewCommand;
@protocol NSPasteboardWriting;

@interface SearchUIShowPhotosOneUpViewHandler : SearchUICommandHandler

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) id<NSPasteboardWriting> pasteboardItem;
@property (retain, nonatomic) SFShowPhotosOneUpViewCommand *oneUpCommand;

+ (id)matchedPersonLocalIdentifiersForCommand:(id)a0;
+ (id)matchedSceneIdentifiersForCommand:(id)a0 andType:(int)a1;

- (void).cxx_destruct;
- (id)url;
- (unsigned long long)destination;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (id)destinationPunchout;
- (id)filePromiseProvider;
- (id)initWithCommand:(id)a0 rowModel:(id)a1 button:(id)a2 sectionModel:(id)a3 environment:(id)a4;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;
- (id)searchContextFor:(id)a0;

@end
