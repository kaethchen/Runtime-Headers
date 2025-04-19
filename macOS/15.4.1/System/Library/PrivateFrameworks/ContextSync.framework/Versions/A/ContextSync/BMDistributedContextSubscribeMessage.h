@class NSArray, NSString;

@interface BMDistributedContextSubscribeMessage : NSObject

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSString *localDevice;
@property (retain, nonatomic) NSString *messageVersion;
@property (nonatomic) unsigned long long messageIntent;
@property (nonatomic) BOOL shouldWake;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithMessageDictionary:(id)a0 fromRemoteDevice:(id)a1 localDevice:(id)a2;
- (id)initWithSubscriptions:(id)a0 localDevice:(id)a1 messageIntent:(unsigned long long)a2;

@end
