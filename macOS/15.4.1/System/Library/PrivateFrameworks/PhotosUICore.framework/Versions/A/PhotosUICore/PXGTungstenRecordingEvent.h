@class NSString;

@interface PXGTungstenRecordingEvent : NSObject

@property (readonly, nonatomic) long long component;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *threadDescription;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithComponent:(long long)a0 eventName:(id)a1;
- (id)serializable;

@end
