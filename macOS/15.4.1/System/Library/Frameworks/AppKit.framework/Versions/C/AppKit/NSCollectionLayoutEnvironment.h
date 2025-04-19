@class NSString, NSObject;
@protocol NSCollectionLayoutContainer, _NSDataSourceSnapshotTranslating;

@interface NSCollectionLayoutEnvironment : NSObject <NSCollectionLayoutEnvironment_Private>

@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) NSObject *traitCollection;
@property (retain, nonatomic) id<_NSDataSourceSnapshotTranslating> _dataSourceSnapshot;
@property (nonatomic) long long _sectionIndex;
@property (nonatomic) BOOL _wantsCollapsedTopSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 traitCollection:(id)a1 dataSourceSnapshot:(id)a2;
- (id)initWithContainer:(id)a0 traitCollection:(id)a1 dataSourceSnapshot:(id)a2 sectionIndex:(long long)a3 wantsCollapsedTopSpacing:(BOOL)a4;

@end
