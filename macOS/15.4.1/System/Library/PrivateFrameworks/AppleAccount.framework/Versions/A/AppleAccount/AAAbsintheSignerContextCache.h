@class AAAbsintheContext, NSDate;

@interface AAAbsintheSignerContextCache : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) AAAbsintheContext *context;

+ (id)cacheWithContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
