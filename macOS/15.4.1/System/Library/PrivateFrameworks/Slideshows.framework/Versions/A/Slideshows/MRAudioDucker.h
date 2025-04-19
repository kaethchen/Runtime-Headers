@class NSString;

@interface MRAudioDucker : NSObject <MRAudioDucker>

@property (nonatomic) double duration;
@property (nonatomic) double time;
@property (nonatomic) double duckInTime;
@property (nonatomic) double duckOutTime;
@property (nonatomic) double duckLevel;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;
@property (nonatomic) double parentDuration;
@property (nonatomic) long long priority;
@property (readonly) double currentDuckLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
