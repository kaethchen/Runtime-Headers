@class TLKAppearance, SearchUICommandEnvironment;
@protocol SearchUIHeaderDelegate;

@interface SearchUICollectionViewAttributes : NSObject

@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL inPreviewPlatter;
@property (nonatomic) BOOL hasFooter;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (retain, nonatomic) TLKAppearance *appearance;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (weak, nonatomic) id<SearchUIHeaderDelegate> headerDelegate;

- (void).cxx_destruct;

@end
