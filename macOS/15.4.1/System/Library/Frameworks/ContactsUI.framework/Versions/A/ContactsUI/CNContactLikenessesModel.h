@class NSArray, CNLikeness;

@interface CNContactLikenessesModel : NSObject

@property (nonatomic) unsigned long long maxNumberOfLikenessesAllowed;
@property (readonly, nonatomic) CNLikeness *currentLikeness;
@property (readonly, nonatomic) NSArray *recentLikenesses;

+ (id)emptyModel;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexOfCurrentLikeness;
- (id)initWithCurrentLikeness:(id)a0 recentLikenesses:(id)a1 maxNumberOfLikenessesAllowed:(unsigned long long)a2;

@end
