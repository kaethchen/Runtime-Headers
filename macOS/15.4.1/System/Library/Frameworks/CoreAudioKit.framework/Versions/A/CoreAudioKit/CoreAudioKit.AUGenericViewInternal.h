@interface CoreAudioKit.AUGenericViewInternal : NSView <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ tintColor;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ hasGroups;
    void /* unknown type, empty encoding */ pathsNeedingPeriodicUpdates;
    void /* unknown type, empty encoding */ scheduledUpdatesTimer;
    void /* unknown type, empty encoding */ showSingleClumpIndex;
    void /* unknown type, empty encoding */ paramDictionary;
    void /* unknown type, empty encoding */ widthInfo;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ auAudioUnit;
@property (nonatomic, retain) void /* unknown type, empty encoding */ owningController;
@property (nonatomic) void /* unknown type, empty encoding */ paramObserverToken;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void)removeScheduledUpdatesTimer;

@end
