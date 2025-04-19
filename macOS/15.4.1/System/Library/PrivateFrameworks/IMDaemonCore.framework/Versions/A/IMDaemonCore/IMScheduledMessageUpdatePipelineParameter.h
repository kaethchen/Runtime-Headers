@class NSString, NSNumber;

@interface IMScheduledMessageUpdatePipelineParameter : NSObject <IMScheduledMessageUpdateProcessingPipelineParameter>

@property (readonly, copy, nonatomic) NSString *GUID;
@property (readonly, copy, nonatomic) NSNumber *scheduleState;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, copy, nonatomic) NSString *fromIdentifier;
@property (readonly, copy, nonatomic) NSString *toIdentifier;

+ (id)scheduleStateWithBlastDoorMessage:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
