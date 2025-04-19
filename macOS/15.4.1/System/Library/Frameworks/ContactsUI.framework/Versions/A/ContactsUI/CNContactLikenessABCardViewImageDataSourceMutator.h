@class NSString;
@protocol ABCardViewImageDataSource, CNScheduler;

@interface CNContactLikenessABCardViewImageDataSourceMutator : NSObject <CNContactLikenessMutator>

@property (retain, nonatomic) id<ABCardViewImageDataSource> dataSource;
@property (retain, nonatomic) id<CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageFromLikeness:(id)a0 memojiMetadata:(id)a1;

- (void).cxx_destruct;
- (id)addNewLikeness:(id)a0;
- (id)deleteLikeness:(id)a0;
- (id)updateLikeness:(id)a0;
- (id)initWithImageDataSource:(id)a0 scheduler:(id)a1;
- (id)setLikenessAsCurrent:(id)a0;

@end
