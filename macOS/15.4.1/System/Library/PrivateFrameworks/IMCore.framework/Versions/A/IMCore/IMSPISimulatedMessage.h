@class NSString, NSArray, NSDictionary, NSDate;

@interface IMSPISimulatedMessage : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL fromMe;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *effectID;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *chatGUID;
@property (retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSString *lastAddressedHandle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)_dateFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_calculateSender;
- (id)_calculateServiceName;
- (id)_calculateTimestamp;
- (id)_createItem;
- (id)_createSimulatedMessage;

@end
