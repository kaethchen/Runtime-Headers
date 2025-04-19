@class NSString;

@interface ACNotifyReader : NSObject <ACNotifyReading> {
    int _notifierToken;
    int _dispatchToken;
}

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long cachedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
