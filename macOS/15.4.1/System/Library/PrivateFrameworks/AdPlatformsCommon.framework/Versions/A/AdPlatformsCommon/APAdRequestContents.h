@class NSArray, APContext, APClientInfo;

@interface APAdRequestContents : NSObject

@property (readonly, nonatomic) APContext *apContext;
@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) APClientInfo *clientInfo;
@property (readonly, nonatomic) BOOL deliverEntireBatch;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 contentTypes:(id)a1 deliverEntireBatch:(BOOL)a2;

@end
