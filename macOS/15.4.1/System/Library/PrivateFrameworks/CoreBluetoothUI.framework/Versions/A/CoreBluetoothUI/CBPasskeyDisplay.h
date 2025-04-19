@class NSScrollView, NSView, NSMutableString, NSImage, NSString, NSCollectionView;

@interface CBPasskeyDisplay : NSView <NSCollectionViewDataSource>

@property (retain) NSCollectionView *passkeyField;
@property (retain) NSScrollView *scrollviewForPasskeyField;
@property (retain) NSView *rootView;
@property (retain) NSMutableString *passkeyString;
@property short passkeyCursorIndex;
@property int returnKeyType;
@property (retain) NSImage *returnKeyImage;
@property (retain) NSImage *returnKeyHighlightedImage;
@property (retain) NSImage *passkeyDigitHighlightImage;
@property long long pairingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)passkeyDisplayView;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)advancePasskeyCursor;
- (void)displayPasskey;
- (void)enableCollectionViewDataSource;
- (void)resetPasskeyCursor;
- (void)retreatPasskeyCursor;
- (void)setPasskey:(id)a0 pairingType:(long long)a1 withReturnKey:(int)a2;

@end
