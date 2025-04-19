@class NSString;

@interface _UXCollectionView : UXCollectionView <_UXCollectionViewOverdraw>

@property (nonatomic) BOOL overdrawEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)documentClass;


@end
