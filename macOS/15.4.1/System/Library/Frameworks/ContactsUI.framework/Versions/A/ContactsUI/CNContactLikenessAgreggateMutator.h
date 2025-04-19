@class NSArray, NSString;

@interface CNContactLikenessAgreggateMutator : NSObject <CNContactLikenessMutator>

@property (retain, nonatomic) NSArray *likenessMutators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addNewLikeness:(id)a0;
- (id)deleteLikeness:(id)a0;
- (id)updateLikeness:(id)a0;
- (id)initWithLikenessMutators:(id)a0;
- (id)setLikenessAsCurrent:(id)a0;

@end
