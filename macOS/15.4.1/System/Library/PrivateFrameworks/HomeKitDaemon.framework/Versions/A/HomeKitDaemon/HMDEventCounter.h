@class NSArray;

@interface HMDEventCounter : NSObject

@property unsigned long long count;
@property (retain) NSArray *observers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;

@end
