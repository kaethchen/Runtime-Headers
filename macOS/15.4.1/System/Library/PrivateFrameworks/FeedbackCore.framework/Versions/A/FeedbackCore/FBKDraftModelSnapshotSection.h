@class NSObject;

@interface FBKDraftModelSnapshotSection : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject *object;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 object:(id)a1;

@end
