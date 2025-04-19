@class CNSchedulerProvider, NSString;
@protocol ABCardViewImageDataSource;

@interface CNContactLikenessCardMutatorFactory : NSObject <CNContactLikenessMutatorFactory>

@property (retain, nonatomic) id<ABCardViewImageDataSource> dataSource;
@property (retain, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 schedulerProvider:(id)a1;
- (id)likenessMutatorForContact:(id)a0 likeness:(id)a1 mutationType:(long long)a2;

@end
