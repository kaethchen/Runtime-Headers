@class NSString, NSUUID;

@interface IMDRelayGroupMutationMessage : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *originalGroupID;
@property (copy, nonatomic) NSUUID *guid;
@property (copy, nonatomic) NSString *destinationCallerID;
@property (readonly, nonatomic) BOOL failed;
@property (nonatomic) BOOL fromMe;

+ (id)messageFromBlastDoorMessage:(id)a0;
+ (id)mutationMessageFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)createDictionary;
- (id)_initWithBlastDoorMessage:(id)a0;
- (id)_initWithType:(unsigned long long)a0 sender:(id)a1 service:(id)a2 groupID:(id)a3 originalGroupID:(id)a4 guid:(id)a5 destinationCallerID:(id)a6 fromMe:(BOOL)a7;

@end
