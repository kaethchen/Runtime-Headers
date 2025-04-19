@class BRCProgress;

@interface BRCRequestData : NSObject <NSCopying>

@property (readonly, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) short requestType;
@property (readonly, nonatomic) id /* block */ finishBlock;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0 requestType:(short)a1 finishBlock:(id /* block */)a2;

@end
