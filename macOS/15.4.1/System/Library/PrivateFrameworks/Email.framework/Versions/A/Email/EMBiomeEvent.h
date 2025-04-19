@class NSString, NSDictionary, NSObject;
@protocol OS_os_log;

@interface EMBiomeEvent : NSObject <EFLoggable, BMStoreData, NSSecureCoding>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *messageId;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)serialize;
- (id)initWithEventName:(id)a0 messageId:(id)a1 payload:(id)a2;

@end
