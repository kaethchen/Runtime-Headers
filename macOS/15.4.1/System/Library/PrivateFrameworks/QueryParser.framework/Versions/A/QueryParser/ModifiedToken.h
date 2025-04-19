@class NSString, NSArray;

@interface ModifiedToken : NSObject

@property (retain, nonatomic) NSString *token;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tokenRange;
@property (retain, nonatomic) NSArray *argIdsForToken;
@property (retain, nonatomic) NSArray *argScoresForToken;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 argIdsForToken:(id)a2 argScoresForToken:(id)a3;

@end
