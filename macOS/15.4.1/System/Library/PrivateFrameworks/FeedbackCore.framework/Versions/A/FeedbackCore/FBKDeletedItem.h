@class NSNumber;

@interface FBKDeletedItem : NSObject

@property (retain, nonatomic) NSNumber *remoteID;
@property (nonatomic) unsigned long long type;

- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
