@class NSString, NSDictionary;

@interface PLProcessInfo : NSObject

@property double totalSystemTime;
@property double totalUserTime;
@property int pid;
@property (retain) NSString *processName;
@property (retain) NSDictionary *threadNameToInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProcessInfo:(id)a0;
- (void)populateCPUTime;
- (id)diffSinceBaseline:(id)a0;
- (id)initWithName:(id)a0 andID:(int)a1;
- (BOOL)isEqualToProcessInfo:(id)a0;

@end
