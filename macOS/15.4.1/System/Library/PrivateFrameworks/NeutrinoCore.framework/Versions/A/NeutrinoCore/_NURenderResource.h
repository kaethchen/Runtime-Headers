@class NSString, NSDate;

@interface _NURenderResource : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long sid;
@property (nonatomic) BOOL inUse;
@property (retain, nonatomic) NSDate *lastUseTime;
@property (nonatomic) unsigned long long useCount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResource:(id)a0 key:(id)a1;

@end
